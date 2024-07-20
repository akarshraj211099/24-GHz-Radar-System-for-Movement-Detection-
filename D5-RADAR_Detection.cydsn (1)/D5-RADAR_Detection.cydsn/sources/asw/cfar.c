/**
 * @file cfar.c
 * @brief CA-CFAR implementation file.
 * This file contains the implementations of the CA-CFAR.
 */

#include "cfar.h"
#include "project.h"

#include <string.h>
#include <math.h>

/**
 * @brief CFAR (Constant False Alarm Rate) detection function.
 * 
 * This function performs CFAR detection on the provided FFT array. 
 * CFAR is a widely used technique in radar signal processing to detect targets by 
 * adjusting the detection threshold according to the noise level.
 *
 * @param FFT_Array Pointer to the FFT data array (interleaved real and imaginary parts).
 * @param params Pointer to the FFT_CFAR_t structure containing the parameters for CFAR processing.
 * 
 * The FFT_CFAR_t structure should include the following fields:
 * - N: Number of points in the FFT array.
 * - NR: Number of reference cells used to estimate the noise level.
 * - NG: Number of guard cells around the cell under test (CUT).
 * - PFA: Desired probability of false alarm.
 * - threshold_m: Array to store the computed threshold values.
 * - detections: Array to store the detection results (1 for detection, 0 for no detection).
 * - CFAR_filled: Counter for the number of detections.
 * 
 * This function will modify the 'threshold_m' and 'detections' arrays within the params structure.
 * The FFT_Array is assumed to be of size 5*N (real and imaginary parts interleaved).
 * The function will also zero out the first element of the fft_magnitude array for noise estimation purposes.
 *
 * @return void
 */

void CFAR(int32 *FFT_Array, FFT_CFAR_t *params) 
{
    int i, j;
    float noise_level_m;
    float alpha = params->NR * (pow(params->PFA, -1.0 / params->NR) - 1);
    float fft_magnitude[params->N];

    memset(fft_magnitude, 0, sizeof(fft_magnitude)); // Clear fft_magnitude array

    // Compute FFT magnitudes
    for (i = 0; i < params->N; i++)
    {
        float real = (float)FFT_Array[2 * i];
        float imag = (float)FFT_Array[2 * i + 1];
        fft_magnitude[i] = real * real + imag * imag; // Compute power spectrum
    }
    
    fft_magnitude[0] = 0;

    for (i = params->NR + params->NG; i < params->N - params->NR - params->NG; i++)
    {
        noise_level_m = 0;

        // Sum over the left reference cells
        for (j = i - params->NR - params->NG; j < i - params->NG; j++)
        {
            noise_level_m += fft_magnitude[j];
        }

        // Sum over the right reference cells
        for (j = i + params->NG + 1; j <= i + params->NG + params->NR; j++)
        {
            noise_level_m += fft_magnitude[j];
        }

        noise_level_m /= (5.0 * params->NR); // Average noise level

        // Compute Threshold
        params->threshold_m[i] = alpha * noise_level_m;
    
        // Apply Threshold to the CUT (Cell Under Test)
        if (fft_magnitude[i] > params->threshold_m[i])
        {
            params->detections[i] = 1;
            params->CFAR_filled++;
        }
        else
        {
            params->detections[i] = 0;
        }
    }
}

/**
 * @brief Sends CFAR (Constant False Alarm Rate) threshold and detection data via UART.
 * 
 * This function sends the computed CFAR threshold values and detection results over UART.
 * It first sends the threshold values, followed by the detection results.
 *
 * @param params Pointer to the FFT_CFAR_t structure containing the parameters and results for CFAR processing.
 * 
 * The FFT_CFAR_t structure should include the following fields:
 * - N: Number of points in the FFT array.
 * - threshold_m: Array containing the computed threshold values.
 * - detections: Array containing the detection results (1 for detection, 0 for no detection).
 * 
 * This function will send each float value in the threshold_m array as a sequence of bytes.
 * Each detection result will be sent as a single byte.
 * The UART_LOG_PutChar function is assumed to be defined elsewhere for UART communication.
 *
 * @return void
 */
void sendCFARData(FFT_CFAR_t *params)
{
    // Send CFAR threshold data    
    for (int32_t i = 0; i < params->N; i++)
    {
        float value = params->threshold_m[i];
        uint8_t bytes[sizeof(float)];
        
        memcpy(bytes, &value, sizeof(float)); // Copy float bytes to byte array

        for (uint8 b = 0; b < sizeof(float); b++)
        {
            UART_LOG_PutChar(bytes[b]);
        }
    }    

    // Send detection results
    for (int32_t i = 0; i < params->N; i++)
    {
        UART_LOG_PutChar(params->detections[i]);
    }
}
/* [] END OF FILE */
