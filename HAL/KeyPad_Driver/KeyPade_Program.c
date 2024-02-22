#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "KeyPad_Config.h"
#include "KeyPad_Interface.h"

#include "DIO_interface.h"

void Void_KeyPad_Init(void)
{
    /*set the direction of the cols to output*/
    DIO_enumSetPinDirection 		            (KPD_PORT,KPD_C0 ,DIO_PIN_OUTPUT);
    DIO_enumSetPinDirection 		            (KPD_PORT,KPD_C1 ,DIO_PIN_OUTPUT);
    DIO_enumSetPinDirection 		            (KPD_PORT,KPD_C2 ,DIO_PIN_OUTPUT);
    DIO_enumSetPinDirection 		            (KPD_PORT,KPD_C3 ,DIO_PIN_OUTPUT);

    /*set the value of the cols to output high*/
    DIO_enumSetPinValue				            (KPD_PORT,KPD_C0 ,DIO_PIN_HIGH);
    DIO_enumSetPinValue				            (KPD_PORT,KPD_C1 ,DIO_PIN_HIGH);
    DIO_enumSetPinValue				            (KPD_PORT,KPD_C2 ,DIO_PIN_HIGH);
    DIO_enumSetPinValue				            (KPD_PORT,KPD_C3 ,DIO_PIN_HIGH);

    /*define the rows to internal pull up */
    DIO_enumConnect_Disconnect_Pullup			(KPD_PORT,KPD_R0,DIO_PIN_PULLUP_YES);
    DIO_enumConnect_Disconnect_Pullup			(KPD_PORT,KPD_R1,DIO_PIN_PULLUP_YES);
    DIO_enumConnect_Disconnect_Pullup			(KPD_PORT,KPD_R2,DIO_PIN_PULLUP_YES);
    DIO_enumConnect_Disconnect_Pullup			(KPD_PORT,KPD_R3,DIO_PIN_PULLUP_YES);

}
u8 U8_GetPressed (void)
{
    u8 return_data = NOTPRESSED ;
    u8 get_pressed;
    u8 row;
    u8 col;
    for(col=0 +KPD_COL_INIT;col<KPD_COL_END + 1 ;col++)
    {
        DIO_enumSetPinValue				(  KPD_PORT, col , DIO_PIN_LOW		);

        for(row = 0 + KPD_ROW_INIT ; row < KPD_ROW_INIT + 1; row++ )
        {
            DIO_enumGetPinValue				( KPD_PORT, row ,&get_pressed	);
            if( get_pressed == 0 )
			{

				_delay_ms(50);   // delay for bouncing

				DIO_enumGetPinValue( KPD_PORT , row , &get_pressed );   // to make sure that the button is pressed & check again

				if( get_pressed == 0 )

				{
					
					return_data = KPD_BUTTONS[ row - KPD_ROW_INIT ][ col - KPD_COL_INIT ];

				}

                _delay_ms(200);
                break;

            }
        }

        DIO_enumSetPinValue				(  KPD_PORT, col , DIO_PIN_HIGH		);
    }   

    return return_data ;
}