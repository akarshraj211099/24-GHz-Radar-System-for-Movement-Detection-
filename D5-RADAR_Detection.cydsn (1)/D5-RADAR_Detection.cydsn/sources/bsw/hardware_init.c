/**
 * @file hardware_init.c
 * @brief Hardware initialization implementation file.
 * This file contains the implementation of the hardware initialization function.
 */

#include "project.h"
#include "hardware_init.h"

/**
 * @brief Initialize hardware.
 *
 * This function initializes the hardware components required for the application.
 * It starts the UART for logging, the WaveDAC8 for waveform generation, and the ADC for analog-to-digital conversion.
 * It also sets the initial state of the LED indicators to off.
 *
 * @return void
 */
void initializeHardware(void)
{
    UART_LOG_Start();
    WaveDAC8_Start();
    ADC_Start();
    
    Green_LED_Write(0);
    Red_LED_Write(0);
    Yellow_LED_Write(0);
}
