/**
 * @file main.c
 * @brief Main application file.
 * This file contains the main function and the main loop.
 * @author Soumya Ranjan Sabat (127993), Akarsh Vijetha Raj (1127916)
 *
 * @revision history
 * 29-05-2024 : Initial Version
 * 30-05-2024 : Updated the code to modular, MATLAB script updated
 * 31-05-2024 : Added the FFT library for compilation, preliminary FFT computation
 * 09-07-2024 : Added the CFAR implmentation, updated code as per review comments
 */

#include <stdio.h>
#include <stdlib.h>
#include "project.h"
#include "state_machine.h"
#include "interrupt_handlers.h"
#include "hardware_init.h"
#include "cfar.h"

/* Global variable to toggle button state*/
volatile uint8_t buttonToggle = 0; 

/* Global varriable imitate sending of character O on UART */
#if((DEBUG_CHO == 1) && (DEBUG_ON == 1))
    volatile uint8_t buttonPBchO;
#endif

/* Global state machine instance */
StateMachine_t stateMachine = {
    
    /* State_t currentState */
    STATE_IDLE, 
    
    /* uint8_t startSampleCommand */
    0, 
    
    /* uint8_t continueSampleCommand */
    0, 
    
    /* uint16_t adcResults[1024] */
    {0}, 
    
    /* uint8_t sampleCount */
    0,
    
    /* int32_t FFT_Array */
    #if(USE_FFT_LIB == 1)
    {0}   
    #endif
};

/* Global CFAR Parameter instance */
FFT_CFAR_t cfarParameters = {
    
    /* int N                    Total number of FFT points */
    BUFFER_SIZE,
    
    /* int NR                   Number of reference cells on each side */
    5,
    
    /* int NG                   Number of guard cells on each side */
    1,
    
    /* float PFA                Probability of False Alarm */
    1e-6,
    
    /* uint8 detections[1024]   Array to hold object detection status for 1024 samples */
    {0},
    
    /* float threshold_m[1024]  Aaray to hold the threshold value for 1024 samples */
    {0},
    
    /* int CFAR_filled          Number of filled CFAR entries */
    0
};

/**
 * @brief Main function
 * 
 * This is the entry point of the application. It initializes the hardware and runs the state machine.
 * The function enables global interrupts, initializes UART interrupt service routine, 
 * and optionally initializes a debug push button interrupt service routine based on configuration.
 * It then enters an infinite loop, running the state machine to handle various states of the application.
 *
 * @return int Returns 0 upon successful execution (though this return value is typically not reached in embedded applications).
 */
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    ISR_UART_StartEx(ISR_UARTReceive);  
    
    #if((DEBUG_CHO == 1) && (DEBUG_ON == 1))
        ISR_PB_chO_StartEx(ISR_PB_chO);
    #endif
    
    initializeHardware();

    #if (DEBUG_ON == 1)
        UART_LOG_PutString("Started\n");
    #endif
    User_LED_Write(1);
    for(;;)
    {
        switch(stateMachine.currentState)
        {
            case STATE_IDLE:
                handleIdleState(&stateMachine);
                break;

            case STATE_SAMPLING:
                handleSamplingState(&stateMachine);
                break;

            case STATE_UART_TRANSFER:
                handleUARTTransferState(&stateMachine, &cfarParameters);
                break;

            default:
                break;
        }
    }
}
