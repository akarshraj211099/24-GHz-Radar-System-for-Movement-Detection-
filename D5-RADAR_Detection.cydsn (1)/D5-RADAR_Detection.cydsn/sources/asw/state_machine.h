/**
 * @file state_machine.h
 * @brief State machine header file.
 * This file contains the declarations for the state machine functions 
 * and the state machine structure.
 */

#ifndef STATE_MACHINE_H
#define STATE_MACHINE_H

#include "project.h"
#include <stdint.h>

#include "cfar.h"    
    
#define DEBUG_ON    0
#define DEBUG_CHO   0
#define USE_FFT_LIB 1
    
#define BUFFER_SIZE 1024u
    
/**
 * @brief Enum for State Machine states.
 */
typedef enum
{
    STATE_IDLE,            ///< Idle state
    STATE_SAMPLING,        ///< Sampling state
    STATE_UART_TRANSFER    ///< UART transfer state
} State_t;

// Structure to hold state machine status
typedef struct
{
    State_t currentState;                   ///< Current state of the state machine
    uint8_t startSampleCommand;             ///< Command to start sampling
    uint8_t continueSampleCommand;          ///< Command to continue sampling
    uint16_t adcResults[BUFFER_SIZE];       ///< Array to store ADC results        
    uint8_t sampleCount;                    ///< Count of samples
    #if(USE_FFT_LIB == 1)
    int32 FFT_Array[2 * BUFFER_SIZE];     ///< Array to store the result of the FFT calculations
    #endif
} StateMachine_t;

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
void handleIdleState(StateMachine_t *sm);

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
void handleSamplingState(StateMachine_t *sm);

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
void handleUARTTransferState(StateMachine_t *sm, FFT_CFAR_t *cfar);

#endif // STATE_MACHINE_H
