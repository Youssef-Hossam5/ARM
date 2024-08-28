/**
 ******************************************************************************
 * @file           : STM32F4xx_HAL_RCC.h
 * @author         : Youssef Hossam Saad
 * @brief          :
 ******************************************************************************
 */


#ifndef HAL_DRIVERS_RCC_STM32F4XX_HAL_RCC_H_
#define HAL_DRIVERS_RCC_STM32F4XX_HAL_RCC_H_

/* --------------------------- Includes Start -------------------------------------------------------- */
#include <HAL_Drivers/Common/STM32F4xx_Peripheral_Defs.h>
#include "HAL_Drivers/Common/STM32F4xx_HAL_Def.h"
/* --------------------------- Includes End ---------------------------------------------------------- */

/* --------------------------- Macro Declarations Start ---------------------------------------------- */

/* @defgroup AHB Pre scaler values */
#define RCC_SYSCLK_AHB_DIV1				RCC_CFGR_HPRE_DIV1
#define RCC_SYSCLK_AHB_DIV2				RCC_CFGR_HPRE_DIV2
#define RCC_SYSCLK_AHB_DIV4				RCC_CFGR_HPRE_DIV4
#define RCC_SYSCLK_AHB_DIV8				RCC_CFGR_HPRE_DIV8
#define RCC_SYSCLK_AHB_DIV16			RCC_CFGR_HPRE_DIV16
#define RCC_SYSCLK_AHB_DIV64			RCC_CFGR_HPRE_DIV64
#define RCC_SYSCLK_AHB_DIV128			RCC_CFGR_HPRE_DIV128
#define RCC_SYSCLK_AHB_DIV256			RCC_CFGR_HPRE_DIV256
#define RCC_SYSCLK_AHB_DIV512			RCC_CFGR_HPRE_DIV512

/* @defgroup APB1 Pre scaler values */
#define RCC_HCLK_APB1_DIV1				RCC_CFGR_PPRE1_DIV1
#define RCC_HCLK_APB1_DIV2				RCC_CFGR_PPRE1_DIV2
#define RCC_HCLK_APB1_DIV4				RCC_CFGR_PPRE1_DIV4
#define RCC_HCLK_APB1_DIV8				RCC_CFGR_PPRE1_DIV8
#define RCC_HCLK_APB1_DIV16				RCC_CFGR_PPRE1_DIV16

/* @defgroup APB2 Pre scaler values */
#define RCC_HCLK_APB2_DIV1				RCC_CFGR_PPRE2_DIV1
#define RCC_HCLK_APB2_DIV2				RCC_CFGR_PPRE2_DIV2
#define RCC_HCLK_APB2_DIV4				RCC_CFGR_PPRE2_DIV4
#define RCC_HCLK_APB2_DIV8				RCC_CFGR_PPRE2_DIV8
#define RCC_HCLK_APB2_DIV16				RCC_CFGR_PPRE2_DIV16



/* --------------------------- Macro Declarations End ------------------------------------------------ */

/* --------------------------- Macro Functions Declarations Start ------------------------------------ */

#define HAL_RCC_GPIOA_CLK_ENABLE()		(SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOAEN_MASK))
#define HAL_RCC_GPIOB_CLK_ENABLE()		(SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOBEN_MASK))
#define HAL_RCC_GPIOC_CLK_ENABLE()		(SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOCEN_MASK))
#define HAL_RCC_GPIOD_CLK_ENABLE()		(SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIODEN_MASK))
#define HAL_RCC_GPIOE_CLK_ENABLE()		(SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOEEN_MASK))
#define HAL_RCC_GPIOF_CLK_ENABLE()		(SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOFEN_MASK))
#define HAL_RCC_GPIOG_CLK_ENABLE()		(SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOGEN_MASK))
#define HAL_RCC_GPIOH_CLK_ENABLE()		(SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOHEN_MASK))
#define HAL_RCC_GPIOI_CLK_ENABLE()		(SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOIEN_MASK))

#define HAL_RCC_GPIOA_CLK_DISABLE()		(CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOAEN_MASK))
#define HAL_RCC_GPIOB_CLK_DISABLE()		(CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOBEN_MASK))
#define HAL_RCC_GPIOC_CLK_DISABLE()		(CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOCEN_MASK))
#define HAL_RCC_GPIOD_CLK_DISABLE()		(CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIODEN_MASK))
#define HAL_RCC_GPIOE_CLK_DISABLE()		(CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOEEN_MASK))
#define HAL_RCC_GPIOF_CLK_DISABLE()		(CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOFEN_MASK))
#define HAL_RCC_GPIOG_CLK_DISABLE()		(CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOGEN_MASK))
#define HAL_RCC_GPIOH_CLK_DISABLE()		(CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOHEN_MASK))
#define HAL_RCC_GPIOI_CLK_DISABLE()		(CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOIEN_MASK))


/* --------------------------- Macro Functions Declarations End -------------------------------------- */

/* --------------------------- Data Type Declarations Start ------------------------------------------ */

typedef struct{
	uint32_t OscillatorType;		 /*!< @ref RCC_OSCILATTORTYPE */
	uint32_t HSE_State;
	uint32_t LSE_State;
	uint32_t HSI_State;
	uint32_t LSI_State;
}RCC_OscInit_TypeDef;

typedef struct{
	uint32_t AHBCLKDivider;
	uint32_t APB1CLKDivider;
	uint32_t APB2CLKDivider;
}RCC_ClkInit_TypeDef;



/* --------------------------- Data Type Declarations End -------------------------------------------- */

/* --------------------------- Software Interfaces Declarations Start -------------------------------- */
HAL_Status_TypeDef HAL_RCC_OscConfig(RCC_OscInit_TypeDef *RCC_OscInitStruct);
HAL_Status_TypeDef HAL_RCC_ClockConfig(RCC_ClkInit_TypeDef *RCC_OscInitStruct);


/* --------------------------- Software Interfaces Declarations End ---------------------------------- */


#endif /* HAL_DRIVERS_RCC_STM32F4XX_HAL_RCC_H_ */
