/**
 ************************************************************************************
 * @file           : CortexM4_Core_SCB.c
 * @author         : Youssef Hossam Saad
 * @brief          :
 *************************************************************************************
 */

#include "CortexM4/CortexM4_Core_SCB.h"



void SCB_SetPriorityGrouping (uint32_t PriorityGroup){
	uint32_t Register_Value =0;
	uint32_t PriorityGroupTemp = ((uint32_t)PriorityGroup&(uint32_t)0x07 );		/* Select Only The required 3 LSBs */

	/* mask the bits that will be changed (last 16 bits and bits 8,9,10) */
	uint32_t RegisterMask = (0xFFFF0700U);

	/* read the register first before setting it */
	uint32_t RegisterValue = SCB->AIRCR;

	/* clear the bits we will change only */
	RegisterValue &= ~(RegisterMask);

	/* change the bits with the needed group and the key */
		RegisterValue = (RegisterValue | (SCB_AIRCR_VECTKEY << SCB_AIRCR_VECTKEY_POS) |
						(PriorityGroupTemp << SCB_AIRCR_PRIGROUP_POS));
	SCB->AIRCR=Register_Value;
}


/**
 *
 */
uint32_t SCB_GetPriortyGrouping(void)
{
	/* mask the needed bits (bits 8,9,10) */
	uint32_t RegisterMask = (0x00000700U);

	/* read the register */
	uint32_t RegisterValue = SCB->AIRCR;

	/* clear all bits except 8,9,10 */
	RegisterValue &= (RegisterMask);

	/* shift the needed bits 8 time to right to get the decimal value */
	RegisterValue = RegisterValue >> SCB_AIRCR_PRIGROUP_POS;

	return (uint32_t)RegisterValue;

}
