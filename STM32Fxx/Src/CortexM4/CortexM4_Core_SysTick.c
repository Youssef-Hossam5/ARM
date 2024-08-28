/*
 * CortexM4_Core_SysTick.c
 *
 *  Created on: Sep 17, 2023
 *      Author: user
 */

#include "CortexM4/CortexM4_Core_SysTick.h"
#include "HAL_Drivers/Common/STM32F4xx_HAL_Def.h"
#include "Common/Common_Macros.h"
static volatile ptrFunction SysTick_CallBack = NULL;

static volatile uint8_t SysTick_Mode = SysTick_SingleInterval_Mode;

/**
 *
 */
uint8_t SysTick_Init(uint32_t SysTick_Ticks)
{
	uint8_t RetVal = 0;

	if(SysTick_LOAD_RELAOD_MASK < SysTick_Ticks){
		RetVal = 1;
	}
	else{
		/* Disable SysTick counter */
		CLEAR_BIT(SYSTICK->CTRL, SysTick_CTRL_ENABLE_MASK);
		/* Set reload register to SysTick ticks */
		SYSTICK->LOAD = SysTick_Ticks;
		/* Reset SysTick counter value  */
		SYSTICK->VAL = 0;
		/* Select Clock */
#if		(SYSTICK_CLOCK_SOURCE == SYSTICK_CLOCK_SOURCE_DEV_1)
		SET_BIT(SYSTICK->CTRL, SysTick_CTRL_CLKSOURCE_MASK);
#elif	(SYSTICK_CLOCK_SOURCE == SYSTICK_CLOCK_SOURCE_DEV_8)
		CLEAR_BIT(SYSTICK->CTRL, SysTick_CTRL_CLKSOURCE_MASK);
#else
#error "Invalid Clock Source"
#endif
		/* Disable SysTick IRQ */
		CLEAR_BIT(SYSTICK->CTRL, SysTick_CTRL_TICKINT_MASK);
	}

	return RetVal;
}

/**
 *
 */
void SysTick_DeInit(void)
{
	/* Disable SysTick counter */
	CLEAR_BIT(SYSTICK->CTRL, SysTick_CTRL_ENABLE_MASK);
	/* Reset reload register to SysTick ticks */
	SYSTICK->LOAD = 0;
	/* Reset SysTick counter value  */
	SYSTICK->VAL = 0;
	/* Disable SysTick IRQ */
	CLEAR_BIT(SYSTICK->CTRL, SysTick_CTRL_TICKINT_MASK);
}

/**
 *
 */
void SysTick_WaitBlocking(uint32_t SysTick_Ticks)
{
	/* Set reload register to SysTick ticks */
	SYSTICK->LOAD = SysTick_Ticks;
	/* Enable SysTick counter */
	SET_BIT(SYSTICK->CTRL, SysTick_CTRL_ENABLE_MASK);
	/* Wait for counting to zero */
	while(READ_BIT(SYSTICK->CTRL, SysTick_CTRL_COUNTFLAG_MASK) == 0);
	/* Disable SysTick counter */
	CLEAR_BIT(SYSTICK->CTRL, SysTick_CTRL_ENABLE_MASK);
	/* Reset reload register to SysTick ticks */
	SYSTICK->LOAD = 0;
	/* Reset SysTick counter value  */
	SYSTICK->VAL = 0;

}

/**
 *
 */
void SysTick_SingleInterval(uint32_t SysTick_Ticks, ptrFunction *CallBack)
{
	if(NULL != CallBack){
		/* Set reload register to SysTick ticks */
		SYSTICK->LOAD = SysTick_Ticks;
		/* Copy user call back to ptrFunction typr */
		SysTick_CallBack = *CallBack;
		/* Set SysTick to Single Interval */
		SysTick_Mode = SysTick_PeriodicInterval_Mode;
		/* Enable SysTick IRQ */
		SET_BIT(SYSTICK->CTRL, SysTick_CTRL_TICKINT_MASK);
		/* Set SysTick IRQ Priority */

		/* Enable SysTick counter */
		SET_BIT(SYSTICK->CTRL, SysTick_CTRL_ENABLE_MASK);
	}
	else{
		/* Nothing */
	}
}

/**
 *
 */
void SysTick_PeriodicInterval(uint32_t SysTick_Ticks, ptrFunction *CallBack)
{
	if(NULL != CallBack){
		/* Set reload register to SysTick ticks */
		SYSTICK->LOAD = SysTick_Ticks;
		/* Copy user call back to ptrFunction typr */
		SysTick_CallBack = *CallBack;
		/* Set SysTick to Periodic Interval */
		SysTick_Mode = SysTick_SingleInterval_Mode;
		/* Enable SysTick IRQ */
		SET_BIT(SYSTICK->CTRL, SysTick_CTRL_TICKINT_MASK);
		/* Set SysTick IRQ Priority */

		/* Enable SysTick counter */
		SET_BIT(SYSTICK->CTRL, SysTick_CTRL_ENABLE_MASK);
	}
	else{
		/* Nothing */
	}
}

/**
 *
 */
uint32_t SysTick_GetRemainingTicks(void)
{
	uint32_t RemainingTicks = 0;

	RemainingTicks = SYSTICK->VAL;

	return RemainingTicks;
}

/**
 *
 */
uint32_t SysTick_GetElapsedTicks	(void)
{
	uint32_t ElapsedTicks = 0;

	ElapsedTicks = SYSTICK->LOAD - SYSTICK->VAL;

	return ElapsedTicks;
}







void SysTick_Handler(void)
{
	if(SysTick_Mode == SysTick_SingleInterval_Mode){
		/* Disable SysTick counter */
		CLEAR_BIT(SYSTICK->CTRL,SysTick_CTRL_ENABLE_MASK);
		/* Reset reload register to SysTick ticks */
		SYSTICK->LOAD = 0;
		/* Reset SysTick counter value  */
		SYSTICK->VAL = 0;
		/* Disable SysTick IRQ */
		CLEAR_BIT(SYSTICK->CTRL, SysTick_CTRL_TICKINT_MASK);
	}
	else{
		/* Nothing */
	}

	if(SysTick_CallBack){
		SysTick_CallBack();
	}
	else{
		/* Nothing */
	}
}







