#ifndef PORT_CONFIG_H_
#define PORT_CONFIG_H_

			/* PINS DIRECTION */

#Define DIO_OUTPUT 						1
#define DIO_INPUT						0

/* OPTIONS:-
1-DIO_OUTPUT
2-DIO_INPUT

*/

#define PORTA_PIN0_DIR 		DIO_INPUT
#define PORTA_PIN1_DIR		DIO_INPUT
#define PORTA_PIN2_DIR 		DIO_INPUT
#define PORTA_PIN3_DIR		DIO_INPUT
#define PORTA_PIN4_DIR 		DIO_INPUT
#define PORTA_PIN5_DIR		DIO_INPUT
#define PORTA_PIN6_DIR 		DIO_INPUT
#define PORTA_PIN7_DIR		DIO_INPUT

#define PORTB_PIN0_DIR 		DIO_INPUT
#define PORTB_PIN1_DIR		DIO_INPUT
#define PORTB_PIN2_DIR 		DIO_INPUT
#define PORTB_PIN3_DIR		DIO_INPUT
#define PORTB_PIN4_DIR 		DIO_INPUT
#define PORTB_PIN5_DIR		DIO_INPUT
#define PORTB_PIN6_DIR 		DIO_INPUT
#define PORTB_PIN7_DIR		DIO_INPUT

#define PORTC_PIN0_DIR 		DIO_INPUT
#define PORTC_PIN1_DIR		DIO_INPUT
#define PORTC_PIN2_DIR 		DIO_INPUT
#define PORTC_PIN3_DIR		DIO_INPUT
#define PORTC_PIN4_DIR 		DIO_INPUT
#define PORTC_PIN5_DIR		DIO_INPUT
#define PORTC_PIN6_DIR 		DIO_INPUT
#define PORTC_PIN7_DIR		DIO_INPUT

#define PORTD_PIN0_DIR 		DIO_INPUT
#define PORTD_PIN1_DIR		DIO_INPUT
#define PORTD_PIN2_DIR 		DIO_INPUT
#define PORTD_PIN3_DIR		DIO_INPUT
#define PORTD_PIN4_DIR 		DIO_INPUT
#define PORTD_PIN5_DIR		DIO_INPUT
#define PORTD_PIN6_DIR 		DIO_INPUT
#define PORTD_PIN7_DIR		DIO_INPUT

/********************************************************************************/

			/*PINS VALUES*/

/*OUTPUT VALUES*/

#define OUTPUT_HIGH					1
#define OUTPUT_LOW					0

/*INPUT VALUES*/			

#define INPUT_PULLUP				1
#define INPUT_FLOATING				0

/*
OPTIONS:-
1-DIO_INPUT_PULLUP
2-DIO_INPUT_FLOATING
3-DIO_OUTPUT_HIGH
4-DIO_OUTPUT_LOW
*/

#define PORTA_PIN0_INITIAL_VALUE		INPUT_FLOATING
#define PORTA_PIN1_INITIAL_VALUE		INPUT_FLOATING
#define PORTA_PIN2_INITIAL_VALUE		INPUT_FLOATING
#define PORTA_PIN3_INITIAL_VALUE		INPUT_FLOATING
#define PORTA_PIN4_INITIAL_VALUE		INPUT_FLOATING
#define PORTA_PIN5_INITIAL_VALUE		INPUT_FLOATING
#define PORTA_PIN6_INITIAL_VALUE		INPUT_FLOATING
#define PORTA_PIN7_INITIAL_VALUE		INPUT_FLOATING

#define PORTB_PIN0_INITIAL_VALUE		INPUT_FLOATING
#define PORTB_PIN1_INITIAL_VALUE		INPUT_FLOATING
#define PORTB_PIN2_INITIAL_VALUE		INPUT_FLOATING
#define PORTB_PIN3_INITIAL_VALUE		INPUT_FLOATING
#define PORTB_PIN4_INITIAL_VALUE		INPUT_FLOATING
#define PORTB_PIN5_INITIAL_VALUE		INPUT_FLOATING
#define PORTB_PIN6_INITIAL_VALUE		INPUT_FLOATING

#define PORTC_PIN0_INITIAL_VALUE		INPUT_FLOATING
#define PORTC_PIN1_INITIAL_VALUE		INPUT_FLOATING
#define PORTC_PIN2_INITIAL_VALUE		INPUT_FLOATING
#define PORTC_PIN3_INITIAL_VALUE		INPUT_FLOATING
#define PORTC_PIN4_INITIAL_VALUE		INPUT_FLOATING
#define PORTC_PIN5_INITIAL_VALUE		INPUT_FLOATING
#define PORTC_PIN6_INITIAL_VALUE		INPUT_FLOATING
#define PORTA_PIN7_INITIAL_VALUE		INPUT_FLOATING

#define PORTD_PIN0_INITIAL_VALUE		INPUT_FLOATING
#define PORTD_PIN1_INITIAL_VALUE		INPUT_FLOATING
#define PORTD_PIN2_INITIAL_VALUE		INPUT_FLOATING
#define PORTD_PIN3_INITIAL_VALUE		INPUT_FLOATING
#define PORTD_PIN4_INITIAL_VALUE		INPUT_FLOATING
#define PORTD_PIN5_INITIAL_VALUE		INPUT_FLOATING
#define PORTD_PIN6_INITIAL_VALUE		INPUT_FLOATING
#define PORTA_PIN7_INITIAL_VALUE		INPUT_FLOATING


#endif