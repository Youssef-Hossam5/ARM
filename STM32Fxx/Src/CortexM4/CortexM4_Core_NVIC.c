/**
 ******************************************************************************
 * @file           : CortexM4_Core_NVIC.c
 * @author         : Youssef Hossam Saad
 * @brief          :
 ******************************************************************************
 */


#include "CortexM4/CortexM4_Core_NVIC.h"
/**
 *
 */
void NVIC_EnableIRQ(IRQn_Type IRQn)
{
	if((uint32_t)IRQn >= 0UL){
		NVIC->ISER[(uint32_t)IRQn >> 5] = (1UL << (((uint32_t)IRQn) & 0x1F));
	}
	else{
		/* Nothing */
	}
}

/**
 *
 */
void NVIC_DisableIRQ(IRQn_Type IRQn)
{
	if((uint32_t)IRQn >= 0UL){
		NVIC->ICER[(uint32_t)IRQn >> 5] = (1UL << (((uint32_t)IRQn) & 0x1F));
	}
	else{
		/* Nothing */
	}
}

/**
 *
 */
void NVIC_SetPendingIRQ(IRQn_Type IRQn)
{
	if((uint32_t)IRQn >= 0UL){
		NVIC->ISPR[(uint32_t)IRQn >> 5] = (1UL << (((uint32_t)IRQn) & 0x1F));
	}
	else{
		/* Nothing */
	}
}

/**
 *
 */
void NVIC_ClearPendingIRQ(IRQn_Type IRQn)
{
	if((uint32_t)IRQn >= 0UL){
		NVIC->ICPR[(uint32_t)IRQn >> 5] = (1UL << (((uint32_t)IRQn) & 0x1F));
	}
	else{
		/* Nothing */
	}
}

/**
 *
 */
uint32_t NVIC_GetActive(IRQn_Type IRQn)
{
	if((uint32_t)IRQn >= 0UL){
		return (((NVIC->ICPR[(uint32_t)IRQn >> 5] & (1UL << (((uint32_t)IRQn) & 0x1F))) != 0UL) ? 1UL : 0UL);
	}
	else{
		return 0;
	}
}


/**
 *
 */
void NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
	if((uint32_t)IRQn >= 0UL){
		NVIC->IP[(uint32_t)IRQn] = (uint8_t)((priority << (8U - NVIC_PRI_BITS)) & (uint32_t)0x000000FF);
	}
	else{
		/* Nothing */
	}
}

/**
 *
 */
uint32_t NVIC_GetPriority(IRQn_Type IRQn)
{
	if((uint32_t)IRQn >= 0UL){
		return ((NVIC->IP[(uint32_t)IRQn] >> (8U - NVIC_PRI_BITS)));
	}
	else{
		/* Nothing */
	}
}















