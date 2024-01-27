#include "Buz_Interface.h"
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"

//Set the direction of the pin connceted to the BUZZER to be output pin 
void BUZ_voidInit(BUZ_Type Buz_Config)
{
	DIO_enumSetPinDirection ( Buz_Config.PORT, Buz_Config.PIN , DIO_PIN_OUTPUT	);
}

//This function make the buzzer to produce sound 
void BUZ_voidON(BUZ_Type Buz_Config)
{
	if(Buz_Config.Active_State == Active_HIGH)
	{
		DIO_enumSetPinValue	(Buz_Config.PORT, Buz_Config.PIN , DIO_PIN_HIGH);
	}
	else if (Buz_Config.Active_State == Active_LOW)
	{
		DIO_enumSetPinValue	(Buz_Config.PORT, Buz_Config.PIN , DIO_PIN_LOW);
	}
	
}

//This function makes the buzzer to stop sound 
void BUZ_voidOFF(BUZ_Type Buz_Config)
{
	if(Buz_Config.Active_State == Active_HIGH)
	{
		DIO_enumSetPinValue	(Buz_Config.PORT, Buz_Config.PIN , DIO_PIN_LOW);
	}
	else if (Buz_Config.Active_State == Active_LOW)
	{
		DIO_enumSetPinValue	(Buz_Config.PORT, Buz_Config.PIN , DIO_PIN_HIGH);
	}
	
}

//This function toggle the Pin connected to the Buzzer 
void BUZ_voidToggle(BUZ_Type Buz_Config)
{
	DIO_enumTogglePinValue (Buz_Config.PORT, Buz_Config.PIN );
}