/**
 * @file    LDR_program
 * @brief		this file used to include the deceleration of the LDR function.
 * @author			Amr Khaled
 * @version			1.0
 */

#include "STD_TYPES.h"

#include "LDR_cfg.h"
#include "LDR_interface.h"

uint8 LDR_u8GetAnalogVolt(uint8 Copy_u8DigitalReading)
{
	uint8 Local_u8AnalogVolt;

	Local_u8AnalogVolt = (uint8)Copy_u8DigitalReading;

	return Local_u8AnalogVolt;
}
