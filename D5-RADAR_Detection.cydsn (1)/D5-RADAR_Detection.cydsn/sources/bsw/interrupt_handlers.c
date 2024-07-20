/**
 * @file interrupt_handlers.c
 * @brief Interrupt handlers implementation file.
 * This file contains the implementations of the interrupt service routines.
 */
#include "interrupt_handlers.h"

/**
 * @brief ISR for button press.
 *
 * This interrupt service routine is called whenever a Button 1 rising edge interrupt occurs.
 */
/*CY_ISR(ISR_ButtonPress)
{
    ISR_PB_ClearPending();
    Push_button_ClearInterrupt();
    if(buttonToggle == 0)
    {
        buttonToggle = 1;
    }
}*/

/**
 * @brief ISR for UART receive.
 *
 * This interrupt service routine is called whenever data is received on the UART.
 * It reads the received character and updates the state machine commands accordingly.
 *
 * @return void
 */
CY_ISR(ISR_UARTReceive)
{
    char receivedData = UART_LOG_GetChar();
    switch(receivedData)
    {
        case 's':
            stateMachine.startSampleCommand = 1;
            break;
        case 'o':
            stateMachine.continueSampleCommand = 1;
            break;
        default:
            break;
    }
}

/**
 * @brief ISR for sending character 'O' instead of UART.
 *
 * This interrupt service routine is called to imitate sending of character 'O' on UART
 * when a specific debug button is pressed. It sets a flag to indicate the button press
 * and clears the pending interrupt.
 *
 * @return void
 */
#if(DEBUG_CHO == 1)
    CY_ISR(ISR_PB_chO)
    {
        if(buttonPBchO == 0)
        {
            buttonPBchO = 1;
        }
        
        ISR_PB_chO_ClearPending();
    }
#endif
