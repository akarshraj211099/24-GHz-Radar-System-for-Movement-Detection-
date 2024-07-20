/**
 * @file hardware_init.h
 * @brief Hardware initialization header file.
 * This file contains the declaration for the hardware initialization function.
 */

#ifndef HARDWARE_INIT_H
#define HARDWARE_INIT_H

/**
 * @brief Initialize hardware.
 *
 * This function initializes the hardware components required for the application.
 * It starts the UART for logging, the WaveDAC8 for waveform generation, and the ADC for analog-to-digital conversion.
 * It also sets the initial state of the LED indicators to off.
 *
 * @return void
 */   
void initializeHardware(void);

#endif // HARDWARE_INIT_H
