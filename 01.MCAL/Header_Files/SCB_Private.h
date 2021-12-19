/*
 * SCB_Private.h
 *
 *  Created on: Dec 11, 2021
 *      Author: Abdelrhman Badr
 */

#ifndef SCB_PRIVATE_H_
#define SCB_PRIVATE_H_

/*PRIORITY_GROUP configurations*/
#define SCB_4_GROUP_0_SUBGROUP			(0x05FA0300)
#define SCB_3_GROUP_1_SUBGROUP			(0x05FA0400)
#define SCB_2_GROUP_2_SUBGROUP			(0x05FA0500)
#define SCB_1_GROUP_3_SUBGROUP			(0x05FA0600)
#define SCB_0_GROUP_4_SUBGROUP			(0x05FA0700)

/*Define register*/
typedef struct
{
	__IO__ uint32t SCB_CPUID;
	__IO__ uint32t SCB_ICSR;
	__IO__ uint32t SCB_VTOR;
	__IO__ uint32t SCB_AIRCR;
	__IO__ uint32t SCB_SCR;
	__IO__ uint32t SCB_CCR;
	__IO__ uint32t SCB_SHPR1;
	__IO__ uint32t SCB_SHCRS;
	__IO__ uint32t SCB_CFSR;
	__IO__ uint32t SCB_HFSR;
	__IO__ uint32t SCB_MMAR;
	__IO__ uint32t SCB_BFAR;
}SCB_Registers_t;

#define SCB    ((__IO__ SCB_Registers_t *)(0xE000ED00))


/*Define bit masks*/
#define SCB_PRIGROUP_BIT_MASK	    (0x05FAF8FF)
#define SCB_PRIGROUP_BIT		    (8)

/*Define password key*/
#define SCB_AIRCR_PASSWORD_KEY		(0x05FA)

#endif /* SCB_PRIVATE_H_ */
