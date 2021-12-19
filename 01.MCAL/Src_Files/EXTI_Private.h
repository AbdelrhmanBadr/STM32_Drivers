/*
 * EXTI_Private.h
 *
 *  Created on: Dec 18, 2021
 *      Author: Abdelrhman Badr
 */

#ifndef EXTI_PRIVATE_H_
#define EXTI_PRIVATE_H_

typedef struct
{
	__IO__  uint32t EXTI_IMR;
	__IO__  uint32t EXTI_EMR;
	__IO__  uint32t EXTI_RTSR;
	__IO__  uint32t EXTI_FTSR;
	__IO__  uint32t EXTI_SWIER;
	__IO__  uint32t EXTI_PR;
}EXTI_Registers_t;

#define EXTI    ((__IO__ EXTI_Registers_t *)(0x40010400))


typedef struct
{
	__IO__  uint32t AFIO_EXTICR[4];

}EXTI_AFIO_Registers_t;

#define EXTI_AFIO   ((__IO__ EXTI_AFIO_Registers_t *)(0x40010000 + 0x08))

#endif /* EXTI_PRIVATE_H_ */
