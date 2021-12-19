/*
 * NVIC.h
 *
 *  Created on: Dec 9, 2021
 *      Author: Abdelrhman Badr
 */

#ifndef NVIC_H_
#define NVIC_H_

/*
 *@brief: This function is used to enable NVIC of the peripheral
 *@Parameters: Interrupt ID
 *@return: Nothing
 */
void NVIC_EnablePeripheralInterrupt(uint8t InterruptID);
/*
 *@brief: This function is used to disable NVIC of the peripheral
 *@Parameters: Interrupt ID
 *@return: Nothing*/
void NVIC_DisablePeripheralInterrupt(uint8t InterruptID);

/*
 *@brief: This function is used to set pending flag
 *@Parameters: Interrupt ID
 *@return: Nothing*/
void NVIC_SetPendingFlag(uint8t InterruptID);
/*
 *@brief: This function is used to clear pending flag
 *@Parameters: Interrupt ID
 *@return: Nothing*/
void NVIC_ClearPendingFlag(uint8t InterruptID);

/*
 *@brief: This function is used to read active flag where active flag is the flag that indicate for that
 *		  ISR of the corresponding interrupt is executing
 *@Parameters: Interrupt ID
 *@return: Nothing*/
void NVIC_GetActiveFlag(uint8t InterruptID,uint8t *ActiveFlag);


void NVIC_SetPriority(uint8t InterruptID , uint8t Priority);

#endif /* NVIC_H_ */
