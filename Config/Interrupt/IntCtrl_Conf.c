/***********************************************************************************
 * 																				   *
 * 	 [MODULE]: Interrupt													       *
 * 																				   *
 * 	 [FILE NAME]: IntCtrl_Conf.c			    							       *
 * 																				   *
 * 	 [AUTHOR]: Ahmed Abdelaal													   *
 * 																				   *
 * 	 [CREATED ON]: 12/09/2022													   *
 * 																				   *
 *   [DESCRIPTION]: source file for interrupt configurations				       *
 * 																				   *
 ***********************************************************************************/

#include "IntCtrl_Conf.h"

/*---------------------------------------------------------------------------------*
 *                               GLOBAL CONST VARIABLES                            *
 *---------------------------------------------------------------------------------*/
const INTERRUPT_TYPE_IRQ g_Chosen_IRQs[IRQs_SIZE] = {GPIO_PORT_A, GPIO_PORT_C, TIMER_16_32_1A};
const INTERRUPT_TYPE_SYS g_Chosen_System_Int_and_Faults[System_Int_and_Faults_SIZE] = {SVCALL, MEMORY_MANAGEMENT, PENDSV};
const uint8 g_IRQs_Priority [IRQs_SIZE] = {2, 1, 0};
const uint8 g_System_Int_and_Faults_Priority [System_Int_and_Faults_SIZE] = {2, 1, 0};



