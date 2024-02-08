#include "Port_Private.h"
#include "Port_Config.h"
#include "Port_Interface.h"

void Port_voidInit(void)
{
	DDRA_Register = PORTA_DIR;
	DDRB_Register = PORTB_DIR;
	DDRC_Register = PORTC_DIR;
	DDRD_Register = PORTD_DIR;
	
	PORTA_Register = PORTA_INITIAL_VALUE;
	PORTB_Register = PORTB_INITIAL_VALUE;
	PORTC_Register = PORTC_INITIAL_VALUE;
	PORTD_Register = PORTD_INITIAL_VALUE;

}