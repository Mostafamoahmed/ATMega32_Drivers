#ifndef KEYPAD_INTERFACE_H_
#define KEYPAD_INTERFACE_H_
 
 #include "STD_TYPES.h"


#define NOTPRESSED 0xff

void Void_KeyPad_Init(void);
u8 U8_GetPressed (void);
#endif
