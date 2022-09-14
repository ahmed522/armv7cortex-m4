/***********************************************************************************
 * 																				   *
 * 	 [MODULE]: Interrupt													       *
 * 																				   *
 * 	 [FILE NAME]: IntTypes.h			    									   *
 * 																				   *
 * 	 [AUTHOR]: Ahmed Abdelaal													   *
 * 																				   *
 * 	 [CREATED ON]: 12/09/2022													   *
 * 																				   *
 *   [DESCRIPTION]: Header file for define all interrupts 					       *
 * 																				   *
 ***********************************************************************************/

#ifndef INTTPYES_H_
#define INTTPYES_H_

/***********************************************************************************
 * 																				   *
 * 	 [ENUM NAME]: INTERRUPT_TYPE_SYS										       *
 * 																				   *												   *
 *   [DESCRIPTION]: System interrupts and faults as in vector table                *
 * 																				   *
 ***********************************************************************************/

typedef enum
{
    RESET = 1,              /* priority = -3 */
    NON_MASKABLE_INTERRUPT, /* priority = -2 */
    HARD_FAULT,             /* priority = -1 */
    MEMORY_MANAGEMENT,      /* priority is programmable */
    BUS_FAULT,              /* priority is programmable */
    USAGE_FAULT,            /* priority is programmable */
    SVCALL = 11,            /* priority is programmable */
    DEBUG_MONITOR,          /* priority is programmable */
    PENDSV = 14,            /* priority is programmable */
    SYS_TICK                /* priority is programmable */
} INTERRUPT_TYPE_SYS;

/***********************************************************************************
 * 																				   *
 * 	 [ENUM NAME]: INTERRUPT_TYPE_IRQ										       *
 * 																				   *												   *
 *   [DESCRIPTION]: IRQ interrupts as in vector table   				           *
 * 																				   *
 ***********************************************************************************/

typedef enum
{
    GPIO_PORT_A,
    GPIO_PORT_B,
    GPIO_PORT_C,
    GPIO_PORT_D,
    GPIO_PORT_E,
    UART_0,
    UART_1,
    SSI0,
    I2C_0,
    PWM0_FAULT,
    PWM0_GENERATOR_0,
    PWM0_GENERATOR_1,
    PWM0_GENERATOR_2,
    QEIO,
    ADC0_SEQUENCE_0,
    ADC0_SEQUENCE_1,
    ADC0_SEQUENCE_2,
    ADC0_SEQUENCE_3,
    WATCHDOG_TIMERS_0_1,
    TIMER_16_32_0A,
    TIMER_16_32_0B,
    TIMER_16_32_1A,
    TIMER_16_32_1B,
    TIMER_16_32_2A,
    TIMER_16_32_2B,
    ANALOG_COMPARATOR_0,
    ANALOG_COMPARATOR_1,
    SYSTEM_CONTROL = 28,
    FLASH_MEMORY_AND_EEPROM_CONTROL,
    GPIO_PORT_F,
    UART_2 = 33,
    SSI1,
    TIMER_16_32_3A,
    TIMER_16_32_3B,
    I2C_1,
    QEI_1,
    CAN_0,
    CAN_1,
    HIBERNATION_MODULE = 43,
    USB,
    PWM_GENERATOR_3,
    uDMA_SOFTWARE,
    uDMA_ERROR,
    ADC1_SEQUENCE_0,
    ADC1_SEQUENCE_1,
    ADC1_SEQUENCE_2,
    ADC1_SEQUENCE_3,
    SSI2 = 57,
    SSI3,
    UART_3,
    UART_4,
    UART_5,
    UART_6,
    UART_7,
    I2C_2 = 68,
    I2C_3,
    TIMER_16_32_4A,
    TIMER_16_32_4B,
    TIMER_16_32_5A = 92,
    TIMER_16_32_5B,
    TIMER_32_64_0A,
    TIMER_32_64_0B,
    TIMER_32_64_1A,
    TIMER_32_64_1B,
    TIMER_32_64_2A,
    TIMER_32_64_2B,
    TIMER_32_64_3A,
    TIMER_32_64_3B,
    TIMER_32_64_4A,
    TIMER_32_64_4B,
    TIMER_32_64_5A,
    TIMER_32_64_5B,
    SYSTEM_EXCEPTION,
    PWM1_GENERATOR_0 = 134,
    PWM1_GENERATOR_1,
    PWM1_GENERATOR_2,
    PWM1_GENERATOR_3,
    PWM1_FAULT
} INTERRUPT_TYPE_IRQ;
uint8 pri_Grp[138] =
    {
        0, 0, 0, 0,
        1, 1, 1, 1,
        2, 2, 2, 2,
        3, 3, 3, 3,
        4, 4, 4, 4,
        5, 5, 5, 5,
        6, 6, 6, 6,
        7, 7, 7, 7,
        8, 8, 8, 8,
        9, 9, 9, 9,
        10, 10, 10, 10,
        11, 11, 11, 11,
        12, 12, 12, 12,
        13, 13, 13, 13,
        14, 14, 14, 14,
        15, 15, 15, 15,
        16, 16, 16, 16,
        17, 17, 17, 17,
        18, 18, 18, 18,
        19, 19, 19, 19,
        20, 20, 20, 20,
        21, 21, 21, 21,
        22, 22, 22, 22,
        23, 23, 23, 23,
        24, 24, 24, 24,
        25, 25, 25, 25,
        26, 26, 26, 26,
        27, 27, 27, 27,
        28, 28, 28, 28,
        29, 29, 29, 29,
        30, 30, 30, 30,
        31, 31, 31, 31,
        32, 32, 32, 32,
        33, 33, 33, 33,
        34, 34, 34};

uint8 pri_Grp_index[138] =
    {
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2, 3,
        0, 1, 2};

#endif