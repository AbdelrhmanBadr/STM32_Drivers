/*
 * EXTI.h
 *
 *  Created on: Dec 18, 2021
 *      Author: Abdelrhman Badr
 */

#ifndef EXTI_H_
#define EXTI_H_

/*Define interrupt lines name*/
#define EXTI_LINEA		(0)
#define EXTI_LINEB 		(1)
#define EXTI_LINEC		(2)

/*Define interrupt modes*/
#define EXTI_RISING		(1)
#define EXTI_FALLING 	(2)
#define EXTI_CHANGE		(3)


/*
 * @breif: This function is used to initiate External interrupt by AIFO
 * @para : (1) LineName --> EXTI_LINEA , EXTI_LINEB , EXTI_LINEC
 * 		   (2) LineNumber --> 0,1,2,...
 *
 * @return: void
 * @NOTE : This function must be used with all interrupts line used
 * @NOTE : This function is used before NVIC_Enable
 */
void EXTI_Initiate(uint8t LineName , uint8t LineNumber , uint8t Mode);

/*
 * @breif: This function is used to set configuration of the interrupt
 * @para :
 * 		   (1) LineNumber --> 0,1,2,...
 * 		   (2) Mode --> EXTI_RISING , EXTI_FALLING , EXTI_CHANGE
 * 		   (3) Function name that will be executed when the even occurs
 *
 * @return: void
 */
void EXTI_SetInterruptCallBack(uint8t LineNumber , void (*PFunction) (void));

#endif /* EXTI_H_ */
