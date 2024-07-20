/**
 * @file state_machine.c
 * @brief State machine implementation file.
 * This file contains the implementations of the state machine functions.
 */

#include <stdio.h>
#include <stdlib.h>

#include "project.h"
#include "state_machine.h"
#include "interrupt_handlers.h"
#include "hardware_init.h"

#if(USE_FFT_LIB == 1)
#include "fft_application.h"
#endif

/**
 * @brief Handle the idle state.
 *
 * This function manages the behavior of the state machine when it is in the idle state.
 * It sets the appropriate LED indicators, resets the sample count, and checks the push button state 
 * to transition to the sampling state.
 *
 * @param sm Pointer to the state machine structure.
 * 
 * The StateMachine_t structure should include the following fields:
 * - currentState: The current state of the state machine.
 * - sampleCount: Counter for the number of samples.
 * 
 * The function sets the green LED to indicate the idle state, and it transitions to the sampling state
 * when the push button is pressed.
 *
 * @return void
 */
void handleIdleState(StateMachine_t *sm)
{
    #if (DEBUG_ON == 1)
        UART_LOG_PutString("State: Idle\n");
    #endif
    
    Green_LED_Write(1);
    Red_LED_Write(0);
    Yellow_LED_Write(0);
    
    sm->sampleCount = 0;
    if(Push_button_Read() == 0)
    {
        sm->currentState = STATE_SAMPLING;
    }
}

/**
 * @brief Handle the sampling state.
 *
 * This function manages the behavior of the state machine when it is in the sampling state.
 * It sets the appropriate LED indicators, clears the ADC results buffer, starts the ADC conversion,
 * and collects 1024 ADC samples. It also transitions to the UART transfer state if the start sample command is received.
 *
 * @param sm Pointer to the state machine structure.
 * 
 * The StateMachine_t structure should include the following fields:
 * - currentState: The current state of the state machine.
 * - adcResults: Array to store ADC conversion results.
 * - startSampleCommand: Flag indicating whether to start sampling.
 * 
 * The function sets the red LED to indicate the sampling state, collects ADC samples, and transitions to
 * the UART transfer state if the start sample command is set.
 *
 * @return void
 */
void handleSamplingState(StateMachine_t *sm)
{
    #if (DEBUG_ON == 1)
        UART_LOG_PutString("State: Sampling\n");
        char buffer_samplingstate[10];
    #endif
    
    Green_LED_Write(0);
    Red_LED_Write(1);
    Yellow_LED_Write(0);
    
    memset(sm->adcResults, 0, sizeof(sm->adcResults));
    
    ADC_StartConvert();
    
    for(int i = 0; i < 1024; i++)
    {
        ADC_IsEndConversion(ADC_WAIT_FOR_RESULT);
        sm->adcResults[i] = ADC_GetResult16();
        #if (DEBUG_ON == 1)
            itoa(i, buffer_samplingstate, 10);
            UART_LOG_PutString("Iterator Value: ");
            UART_LOG_PutString(buffer_samplingstate);
            UART_LOG_PutString("\n");
        #endif
    }
    
    if(sm->startSampleCommand)
    {
        #if (DEBUG_ON == 1)
            UART_LOG_PutString("Command: S\n");
            char buffer_samplingstate[10];
        #endif
        sm->currentState = STATE_UART_TRANSFER;
        sm->startSampleCommand = 0;
    }
}

/**
 * @brief Handle the UART transfer state.
 *
 * This function manages the behavior of the state machine when it is in the UART transfer state.
 * It sends the ADC results over UART, performs FFT processing, applies CFAR, and sends the CFAR data.
 * It also transitions between states based on the sample count and commands.
 *
 * @param sm Pointer to the state machine structure.
 * @param cfar_param Pointer to the FFT_CFAR_t structure containing the parameters for CFAR processing.
 * 
 * The StateMachine_t structure should include the following fields:
 * - currentState: The current state of the state machine.
 * - adcResults: Array to store ADC conversion results.
 * - FFT_Array: Array to store FFT results.
 * - sampleCount: Counter for the number of samples.
 * - startSampleCommand: Flag indicating whether to start sampling.
 * - continueSampleCommand: Flag indicating whether to continue sampling.
 * 
 * The function sets the yellow LED to indicate the UART transfer state, sends ADC results over UART,
 * performs FFT and CFAR processing if enabled, and transitions to the appropriate state based on conditions.
 *
 * @return void
 */
void handleUARTTransferState(StateMachine_t *sm, FFT_CFAR_t *cfar_param)
{
    #if (DEBUG_ON == 1)
        UART_LOG_PutString("State: Transfer\n");
        char buffer_transferstate[10];
        char buffer_count[10];
    #endif
    
    Green_LED_Write(0);
    Red_LED_Write(0);
    Yellow_LED_Write(1);
        
    for(int i = 0; i < 1024; i++)
    {
        #if (DEBUG_ON == 1)
            UART_LOG_PutString("Transfer Start\n");
        #endif
        
        UART_LOG_PutChar(sm->adcResults[i] & 0xFF); //Extracting LSB & sending to MATLAB
        UART_LOG_PutChar(sm->adcResults[i] >> 8);   //Extracting MSB & sending to MATLAB
        
        #if (DEBUG_ON == 1)
            UART_LOG_PutString("\n");
            UART_LOG_PutString("Transfer End\n");            
            itoa(i, buffer_transferstate, 10);
            UART_LOG_PutString("Iterator Value: ");
            UART_LOG_PutString(buffer_transferstate);
            UART_LOG_PutString("\n");
        #endif
    }
    
    #if(USE_FFT_LIB == 1)
        
    memset(sm->FFT_Array, 0, sizeof(sm->FFT_Array));
    
    fft_app(sm->adcResults,sm->FFT_Array,1024);
    
    for(int32 fft_iter = 0; fft_iter < 2048; fft_iter++)
    {
        UART_LOG_PutChar(sm->FFT_Array[fft_iter]);
        UART_LOG_PutChar(sm->FFT_Array[fft_iter]>>8);
        UART_LOG_PutChar(sm->FFT_Array[fft_iter]>>16);
        UART_LOG_PutChar(sm->FFT_Array[fft_iter]>>24);
    }
    
    // CFAR Computation and sending of data through UART for MATLAB analysis
    CFAR(sm->FFT_Array, cfar_param);    
    sendCFARData(cfar_param);
    
    #endif

    sm->sampleCount++;
    
    #if (DEBUG_ON == 1)
        itoa(sm->sampleCount, buffer_count, 10);
        UART_LOG_PutString("Count: ");
        UART_LOG_PutString(buffer_count);
        UART_LOG_PutString("\n");
    #endif
    
    #if((DEBUG_CHO == 1) && (DEBUG_ON == 1))
        if((sm->sampleCount < 10) && buttonPBchO)
    #else
    if((sm->sampleCount < 10) && sm->continueSampleCommand)
    #endif
    {
        #if (DEBUG_ON == 1)
            UART_LOG_PutString("Count < 10\n");
        #endif
        
        sm->currentState = STATE_SAMPLING;
        
        #if((DEBUG_CHO == 1) && (DEBUG_ON == 1))
            buttonPBchO = 0;    
        #else
        sm->continueSampleCommand = 0;
        #endif
    }
    else if((sm->sampleCount == 10) && sm->continueSampleCommand)
    {
        #if (DEBUG_ON == 1)
            UART_LOG_PutString("Count == 10\n");
        #endif
        
        sm->currentState = STATE_IDLE;
        
        #if((DEBUG_CHO == 1) && (DEBUG_ON == 1))
            buttonPBchO = 0;  
        #else
        sm->continueSampleCommand = 0;
        #endif
    }
}
