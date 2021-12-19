/*
 * NVIC.c
 *
 *  Created on: Dec 9, 2021
 *      Author: Abdelrhman Badr
 */

#include "BitMath.h"
#include "STD_DataTypes.h"
#include "NVIC_Private.h"
#include "NVIC.h"

void NVIC_EnablePeripheralInterrupt(uint8t InterruptID)
{
	if(InterruptID < 60)
	{
		SET_BIT(NVIC->NVIC_ISER[InterruptID / 32] , (InterruptID % 32));
	}
	else
	{
		/*Error*/
	}
}

void NVIC_DisablePeripheralInterrupt(uint8t InterruptID)
{
	if(InterruptID < 60)
    {
      SET_BIT(NVIC->NVIC_ICER[InterruptID / 32] , (InterruptID % 32));
    }
    else
    {
    	/*Error*/
    }
}
void NVIC_SetPendingFlag(uint8t InterruptID)
{
	if(InterruptID < 60)
    {
      SET_BIT(NVIC->NVIC_ISPR[InterruptID / 32] , (InterruptID % 32));
    }
    else
    {
    	/*Error*/
    }
}
void NVIC_ClearPendingFlag(uint8t InterruptID)
{
	if(InterruptID < 60)
    {
      SET_BIT(NVIC->NVIC_ICPR[InterruptID / 32] , (InterruptID % 32));
    }
    else
    {
    	/*Error*/
    }
}

void NVIC_GetActiveFlag(uint8t InterruptID , uint8t *ActiveFlag)
{
	*ActiveFlag = GET_BIT(NVIC->NVIC_ICPR[InterruptID / 32] , (InterruptID % 32));
}

void NVIC_SetPriority(uint8t InterruptID , uint8t Priority)
{
	NVIC->NVIC_IPR[InterruptID] = Priority << 4;
}

