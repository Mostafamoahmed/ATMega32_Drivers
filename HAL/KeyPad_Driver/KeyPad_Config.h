#ifndef KEYPAD_CONFIG_H_
#define KEYPAD_CONFIG_H_

#include "STD_TYPES.h"

#define KPD_ROW_INIT        DIO_PIN0
#define KPD_ROW_END         DIO_PIN3 

#define KPD_COL_INIT        DIO_PIN4
#define KPD_COL_END         DIO_PIN7

                                /*C1  C2  C3  C4  */
u8 KPD_BUTTONS [4][4] ={        {'7','8','9','/'},  //R1
                                {'4','5','6','x'},  //R2
                                {'1','2','3','-'},  //R3
                                {'?','0','=','+'}   //R4

};

#define KPD_PORT            DIO_PORTD
/*OPTIONS:-
1-DIO_PORTA
2-DIO_PORTB
3-DIO_PORTC
4-DIO_PORTD
*/

#define KPD_R0               DIO_PIN0
#define KPD_R1               DIO_PIN1
#define KPD_R2               DIO_PIN2
#define KPD_R3               DIO_PIN3

#define KPD_C0               DIO_PIN4
#define KPD_C1               DIO_PIN5
#define KPD_C2               DIO_PIN6
#define KPD_C3               DIO_PIN7

#endif