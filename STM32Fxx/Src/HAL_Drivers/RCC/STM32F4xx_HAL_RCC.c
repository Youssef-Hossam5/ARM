/**
 ******************************************************************************
 * @file           : STM32F4xx_HAL_RCC.c
 * @author         : Youssef Hossam Saad
 * @brief          :
 ******************************************************************************
 */

#include "HAL_Drivers/RCC/STM32F4xx_HAL_RCC.h"

/**
 *
 */
HAL_Status_TypeDef HAL_RCC_OscConfig(RCC_OscInit_TypeDef *RCC_OscInitStruct)
{
	HAL_Status_TypeDef RetStatus = HAL_OK;

	if(NULL == RCC_OscInitStruct){
		RetStatus = HAL_ERROR;
	}
	else{
		if(RCC_OSCILATTORTYPE_HSE == RCC_OscInitStruct->OscillatorType){
			if(RCC_HSE_ON == RCC_OscInitStruct->HSE_State){
				/* select HSE as system clock */
				CLEAR_BIT(RCC->CFGR, RCC_CFGR_SW0_MASK);
				SET_BIT(RCC->CFGR, RCC_CFGR_SW1_MASK);
				/* Enable HSE clock */
				SET_BIT(RCC->CR, RCC_CR_HSEON_MASK);
			}
			else{
				CLEAR_BIT(RCC->CR, RCC_CR_HSEON_MASK);
			}
		}
		else if(RCC_OSCILATTORTYPE_LSE == RCC_OscInitStruct->OscillatorType){
			/* TBD */
		}
		else if(RCC_OSCILATTORTYPE_HSI == RCC_OscInitStruct->OscillatorType){
			/* TBD */
		}
		else if(RCC_OSCILATTORTYPE_LSI == RCC_OscInitStruct->OscillatorType){
			/* TBD */
		}
		else{
			/* Nothing */
		}
	}

	return RetStatus;
}

/**
 *
 */
HAL_Status_TypeDef HAL_RCC_ClockConfig(RCC_ClkInit_TypeDef *RCC_ClkInitStruct)
{
	HAL_Status_TypeDef RetStatus = HAL_OK;

	if(NULL == RCC_ClkInitStruct){
		RetStatus = HAL_ERROR;
	}
	else{
		MODIFY_REG(RCC->CFGR, RCC_CFGR_HPRE_MASK,  RCC_ClkInitStruct->AHBCLKDivider);
		MODIFY_REG(RCC->CFGR, RCC_CFGR_PPRE1_MASK, RCC_ClkInitStruct->APB1CLKDivider);
		MODIFY_REG(RCC->CFGR, RCC_CFGR_PPRE2_MASK, RCC_ClkInitStruct->APB2CLKDivider);
	}

	return RetStatus;
}
