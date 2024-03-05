#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GIE_Private.h"
#include "GIE_Interface.h"

void Void_GIE_Enable(void)
{
	SetBit(SREG,SREG_I);
}

void Void_GIE_Disable(void)
{
	ClrBit(SREG,SREG_I);
}
