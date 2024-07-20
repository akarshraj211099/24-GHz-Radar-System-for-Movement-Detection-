/**
 * @file interrupt_handlers.h
 * @brief Interrupt handlers header file.
 * This file contains the declarations for the interrupt service routines.
 */

#ifndef INTERRUPT_HANDLERS_H
#define INTERRUPT_HANDLERS_H

#include "project.h"
#include "state_machine.h"

// Declare the external global variables
extern volatile uint8_t buttonToggle; 
extern StateMachine_t stateMachine;

#if((DEBUG_CHO == 1) && (DEBUG_ON == 1))
    extern volatile uint8_t buttonPBchO;
#endif

// ISR Prototypes
    
/**
 * @brief ISR for button press.
 */
//CY_ISR_PROTO(ISR_ButtonPress);

/**
 * @brief ISR for UART receive.
 */
CY_ISR_PROTO(ISR_UARTReceive);

/**
 * @brief ISR to imitate sending character O instead of UART
 */
#if((DEBUG_CHO == 1) && (DEBUG_ON == 1))
    CY_ISR_PROTO(ISR_PB_chO);
#endif

#endif // INTERRUPT_HANDLERS_H
