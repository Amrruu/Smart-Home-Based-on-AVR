/* @file      CLCD_interface
   @brief			This file contains private macros for the ADC driver
 * @author			Amr Khaled
 * @version			1.0
 */ 
#ifndef CLCD_INTERFACE_H_
#define CLCD_INTERFACE_H_


void CLCD_voidSendCmd(uint8 Copy_u8Cmd);

void CLCD_voidSendData(uint8 Copy_u8Data);

void CLCD_voidInit(void);

uint8 CLCD_u8SendString(const char* Copy_chString);

void CLCD_voidSendNumber(sint32 Copy_s32Number);

void CLCD_voidSendBinary(sint32 Copy_s32DecimalNumber);

void CLCD_voidSendHex(sint32 Copy_s32DecimalNumber);

void CLCD_voidGoToXY(uint8 Copy_u8XPos, uint8 Copy_u8yPos);

void CLCD_voidSendSpecialChar(uint8 *Copy_u8Pattern, uint8 Copy_u8PatternNumber, uint8 Copy_u8XPos, uint8 Copy_u8YPos);




#endif
