/*
 * SCB.c
 *
 *  Created on: Dec 11, 2021
 *      Author: Abdelrhman Badr
 */

#include "BitMath.h"
#include "STD_DataTypes.h"
#include "SCB_Config.h"
#include "SCB_Private.h"
#include "SCB.h"

void SCB_Initiate (void)
{
	/*Set group priority*/
	SCB->SCB_AIRCR = SCB_PRIORITY_GROUP_DISTRIBUTION;
}
