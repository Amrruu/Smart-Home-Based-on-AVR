/**
 * @file    LM35_program
 * @brief		this file used to include the deceleration of the LDR function.
 * @author			Amr Khaled
 * @version			1.0
 */

#include "STD_TYPES.h"
#include "LM35_interface.h"

uint8 LM35_u8GetTempreature(uint8 Copy_u8DigitalReading)
{

	return ((uint8)(((uint32)Copy_u8DigitalReading * 500UL) / 256UL));
}
