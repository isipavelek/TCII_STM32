/*
 * hw_init.h
 *
 *  Created on: Oct 3, 2023
 *      Author: ipave
 */

#ifndef INC_HW_INIT_H_
#define INC_HW_INIT_H_

#include "main.h"
#include "string.h"


void SystemClock_Config(void);
void MX_GPIO_Init(void);
void MX_ETH_Init(void);
void MX_USART3_UART_Init(void);
void MX_USB_OTG_FS_PCD_Init(void);
void MX_ADC1_Init(void);
void MX_DAC_Init(void);
void MX_TIM2_Init(void);
void MX_NVIC_Init(void);


#endif /* INC_HW_INIT_H_ */