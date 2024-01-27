#ifndef BUZ_INTERFACE_H_
#define BUZ_INTERFACE_H_

#include "STD_TYPES.h"

//ports Defines 
#define BUZ_PORTA		0
#define BUZ_PORTB		1
#define BUZ_PORTC		2
#define BUZ_PORTD		3

//Pins Defines
#define BUZ_PIN0		0
#define BUZ_PIN1		1
#define BUZ_PIN2		2
#define BUZ_PIN3		3
#define BUZ_PIN4		4
#define BUZ_PIN5		5
#define BUZ_PIN6		6
#define BUZ_PIN7		7

#define Active_HIGH		1
#define Active_LOW 		0

typedef struct{
	
	u8 PORT;
	u8 PIN;
	u8 Active_State;
	
}BUZ_Type;

void BUZ_voidInit(BUZ_Type Buz_Config);
void BUZ_voidON(BUZ_Type Buz_Config);
void BUZ_voidOFF(BUZ_Type Buz_Config);
void BUZ_voidToggle(BUZ_Type Buz_Config);


#endif