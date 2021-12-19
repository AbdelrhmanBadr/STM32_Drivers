/*
 * NVIC_Private.h
 *
 *  Created on: Dec 9, 2021
 *      Author: Abdelrhman Badr
 */

#ifndef NVIC_PRIVATE_H_
#define NVIC_PRIVATE_H_

typedef struct
{
	__IO__  uint32t NVIC_ISER[3];
	__IO__  uint32t _NVIC_Reserved_0[29];
	__IO__  uint32t NVIC_ICER[3];
	__IO__  uint32t _NVIC_Reserved_1[29];
	__IO__  uint32t NVIC_ISPR[3];
	__IO__  uint32t _NVIC_Reserved_2[29];
	__IO__  uint32t NVIC_ICPR[3];
	__IO__  uint32t _NVIC_Reserved_3[29];
	__IO__  uint32t NVIC_IAPR[3];
	__IO__  uint32t _NVIC_Reserved_4[29];
	__IO__  uint8t	 NVIC_IPR [60];
}NVIC_Registers_t;

#define NVIC    ((__IO__ NVIC_Registers_t *)(0xE000E100))


#endif /* NVIC_PRIVATE_H_ */
