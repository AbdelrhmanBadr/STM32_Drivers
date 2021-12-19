/*
 * EXTI.c
 *
 *  Created on: Dec 18, 2021
 *      Author: Abdelrhman Badr
 */
#include "BitMath.h"
#include "STD_DataTypes.h"
#include "EXTI_Private.h"
#include "EXTI.h"

/*Define an array of pointer to functions*/
void (*EXTI_PointerToIsr[15]) (void) = {NULL};

void EXTI_Initiate(uint8t LineName , uint8t LineNumber , uint8t Mode)
{
	EXTI_AFIO -> AFIO_EXTICR[LineNumber/4] |= LineName << (LineNumber%4);
	/*Enable corresponding interrupt*/
	SET_BIT(EXTI->EXTI_IMR , LineNumber);
	/*Enable mode*/
	switch(Mode)
	{
	case EXTI_RISING : SET_BIT(EXTI->EXTI_RTSR , LineNumber); break;
	case EXTI_FALLING: SET_BIT(EXTI->EXTI_FTSR , LineNumber); break;
	case EXTI_CHANGE : SET_BIT(EXTI->EXTI_RTSR , LineNumber); SET_BIT(EXTI->EXTI_FTSR , LineNumber); break;
	}
}
void EXTI_SetInterruptCallBack(uint8t LineNumber , void (*PFunction) (void))
{
	/*Set the global pointer*/
	EXTI_PointerToIsr[LineNumber] = PFunction;
}

/*****************************************EXTI_IRQ*************************************************************/
void EXTI0_IRQHandler(void)
{
	EXTI_PointerToIsr[0]();
	SET_BIT(EXTI->EXTI_PR,0);
}
void EXTI1_IRQHandler(void)
{
	EXTI_PointerToIsr[1]();
	SET_BIT(EXTI->EXTI_PR,1);
}
void EXTI2_IRQHandler(void)
{
	EXTI_PointerToIsr[2]();
	SET_BIT(EXTI->EXTI_PR,2);
}
void EXTI3_IRQHandler(void)
{
	EXTI_PointerToIsr[3]();
	SET_BIT(EXTI->EXTI_PR,3);
}
void EXTI4_IRQHandler(void)
{
	EXTI_PointerToIsr[4]();
	SET_BIT(EXTI->EXTI_PR,4);
}
void EXTI5_IRQHandler(void)
{
	EXTI_PointerToIsr[5]();
	SET_BIT(EXTI->EXTI_PR,5);
}
void EXTI6_IRQHandler(void)
{
	EXTI_PointerToIsr[6]();
	SET_BIT(EXTI->EXTI_PR,6);
}
void EXTI7_IRQHandler(void)
{
	EXTI_PointerToIsr[7]();
	SET_BIT(EXTI->EXTI_PR,7);
}
void EXTI8_IRQHandler(void)
{
	EXTI_PointerToIsr[8]();
	SET_BIT(EXTI->EXTI_PR,8);
}
void EXTI9_IRQHandler(void)
{
	EXTI_PointerToIsr[9]();
	SET_BIT(EXTI->EXTI_PR,9);
}
void EXTI10_IRQHandler(void)
{
	EXTI_PointerToIsr[10]();
	SET_BIT(EXTI->EXTI_PR,10);
}
void EXTI11_IRQHandler(void)
{
	EXTI_PointerToIsr[11]();
	SET_BIT(EXTI->EXTI_PR,11);
}
void EXTI12_IRQHandler(void)
{
	EXTI_PointerToIsr[12]();
	SET_BIT(EXTI->EXTI_PR,12);
}
void EXTI13_IRQHandler(void)
{
	EXTI_PointerToIsr[13]();
	SET_BIT(EXTI->EXTI_PR,13);
}
void EXTI14_IRQHandler(void)
{
	EXTI_PointerToIsr[14]();
	SET_BIT(EXTI->EXTI_PR,14);
}
void EXTI15_IRQHandler(void)
{
	EXTI_PointerToIsr[15]();
	SET_BIT(EXTI->EXTI_PR,15);
}
