/* @file      DC_MOTOR_interface
	 @brief			This file contains private macros for the ADC driver
 * @author			Amr Khaled
 * @version			1.0
 */

#ifndef DCMOTOR_INTERFACE_H_
#define DCMOTOR_INTERFACE_H_

typedef struct
{
	uint8 PORT;
	uint8 PIN2_3;
	uint8 PIN1_4;

} DCMOTOR_T;

uint8 DCMOTOR_u8RotateCW(const DCMOTOR_T *Copy_pDCMOTOR);
uint8 DCMOTOR_u8RotateCCW(const DCMOTOR_T *Copy_pDCMOTOR);
uint8 DCMOTOR_u8Stop(const DCMOTOR_T *Copy_pDCMOTOR);

#endif
