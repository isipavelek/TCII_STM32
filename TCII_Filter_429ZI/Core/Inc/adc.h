/*
 * adc.h
 *
 *  Created on: Oct 3, 2023
 *      Author: ipave
 */

#ifndef INC_ADC_H_
#define INC_ADC_H_

#include "main.h"
void HAL_ADC_ConCpltCallback(ADC_HandleTypeDef* hadc);

#define CARGANDO_A 0
#define SAMPLES_PER_BLOCK 1024

typedef enum{
	NO_PROCESAR,
	PROCESAR_A,
	PROCESAR_B,

}procesar_type_t;

#endif /* INC_ADC_H_ */
