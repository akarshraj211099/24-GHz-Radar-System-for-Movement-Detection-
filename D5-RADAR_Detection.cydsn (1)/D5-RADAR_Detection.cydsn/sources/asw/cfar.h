/**
 * @file cfar.h
 * @brief CA-CFAR implementation file.
 * This file contains the implementations of the CA-CFAR.
 */

#ifndef CFAR_H
#define CFAR_H

#include "project.h"
#include <stdint.h>
    
typedef struct
{
    int N;                      // Total number of FFT points
    int NR;                     // Number of reference cells on each side
    int NG;                     // Number of guard cells on each side
    float PFA;                  // Probability of False Alarm
    uint8 detections[1024];     // Array to hold object detection status for 1024 samples
    float threshold_m[1024];    // Aaray to hold the threshold value for 1024 samples
    int CFAR_filled;            // Number of filled CFAR entries
} FFT_Cfar_Params;

typedef FFT_Cfar_Params FFT_CFAR_t;


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
void CFAR(int32 *FFT_Array, FFT_CFAR_t *params);

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
void sendCFARData(FFT_CFAR_t *params);

#endif // CFAR_H
