/**
 ******************************************************************************
 * @file           : STM32F4xx_Peropheral_Defs.h
 * @author         : Youssef Hossam Saad
 * @brief          : Periphral Memory Map
 ******************************************************************************
 */

#ifndef HAL_DRIVERS_COMMON_STM32F4XX_PERIPHERAL_DEFS_H_
#define HAL_DRIVERS_COMMON_STM32F4XX_PERIPHERAL_DEFS_H_

/* --------------------------- Includes Start -------------------------------------------------------- */

#include "Common/Std_Types.h"
#include "Common/Common_Macros.h"

/* --------------------------- Includes End ---------------------------------------------------------- */

/* --------------------------- Macro Declarations Start ---------------------------------------------- */

/* Memory Map */
#define PERIPH_BASE						(0x40000000UL)
#define AHB1PERIPH_BASE					(0x40020000UL)
#define RCC_BASE						(0x40023800UL)
#define RCC								((RCC_TypeDef *)RCC_BASE)

#define RCC_CFGR_SW0_MASK				(0x1UL << 0U)
#define RCC_CFGR_SW1_MASK				(0x1UL << 1U)
#define RCC_CR_HSEON_MASK				(0x1UL << 16U)

/* @defgroup RCC_AHB1ENR_GPIOxEN_MASK */
#define RCC_AHB1ENR_GPIOAEN_MASK		(0x1UL << 0U)
#define RCC_AHB1ENR_GPIOBEN_MASK		(0x1UL << 1U)
#define RCC_AHB1ENR_GPIOCEN_MASK		(0x1UL << 2U)
#define RCC_AHB1ENR_GPIODEN_MASK		(0x1UL << 3U)
#define RCC_AHB1ENR_GPIOEEN_MASK		(0x1UL << 4U)
#define RCC_AHB1ENR_GPIOFEN_MASK		(0x1UL << 5U)
#define RCC_AHB1ENR_GPIOGEN_MASK		(0x1UL << 6U)
#define RCC_AHB1ENR_GPIOHEN_MASK		(0x1UL << 7U)
#define RCC_AHB1ENR_GPIOIEN_MASK		(0x1UL << 8U)

/* @defgroup RCC_OSCILATTORTYPE */
#define RCC_OSCILATTORTYPE_NONE			(0x00000000U)
#define RCC_OSCILATTORTYPE_HSE			(0x00000001U)
#define RCC_OSCILATTORTYPE_HSI			(0x00000002U)
#define RCC_OSCILATTORTYPE_LSE			(0x00000004U)
#define RCC_OSCILATTORTYPE_LSI			(0x00000008U)

/* @defgroup RCC Clock ON/OFF */
#define RCC_HSE_ON						((uint8_t)0x01)
#define RCC_HSE_OFF						((uint8_t)0x00)
#define RCC_LSE_ON						((uint8_t)0x01)
#define RCC_LSE_OFF						((uint8_t)0x00)
#define RCC_HSI_ON						((uint8_t)0x01)
#define RCC_HSI_OFF						((uint8_t)0x00)
#define RCC_LSI_ON						((uint8_t)0x01)
#define RCC_LSI_OFF						((uint8_t)0x00)

/* @defgroup AHB Pre scaler values */
#define RCC_CFGR_HPRE_POS				(4U)
#define RCC_CFGR_HPRE_MASK				(0xF0UL)
#define RCC_CFGR_HPRE_DIV1				(0x00000000U)
#define RCC_CFGR_HPRE_DIV2				(0x00000080U)
#define RCC_CFGR_HPRE_DIV4				(0x00000090U)
#define RCC_CFGR_HPRE_DIV8				(0x000000A0U)
#define RCC_CFGR_HPRE_DIV16				(0x000000B0U)
#define RCC_CFGR_HPRE_DIV64				(0x000000C0U)
#define RCC_CFGR_HPRE_DIV128			(0x000000D0U)
#define RCC_CFGR_HPRE_DIV256			(0x000000E0U)
#define RCC_CFGR_HPRE_DIV512			(0x000000F0U)

/* @defgroup APB1 Pre scaler values */
#define RCC_CFGR_PPRE1_POS				(10U)
#define RCC_CFGR_PPRE1_MASK				(0x1C00UL)
#define RCC_CFGR_PPRE1_DIV1				(0x00000000U)
#define RCC_CFGR_PPRE1_DIV2				(0x00001000U)
#define RCC_CFGR_PPRE1_DIV4				(0x00001400U)
#define RCC_CFGR_PPRE1_DIV8				(0x00001800U)
#define RCC_CFGR_PPRE1_DIV16			(0x00001C00U)

/* @defgroup APB2 Pre scaler values */
#define RCC_CFGR_PPRE2_POS				(13U)
#define RCC_CFGR_PPRE2_MASK				(0xE000UL)
#define RCC_CFGR_PPRE2_DIV1				(0x00000000U)
#define RCC_CFGR_PPRE2_DIV2				(0x00008000U)
#define RCC_CFGR_PPRE2_DIV4				(0x0000A000U)
#define RCC_CFGR_PPRE2_DIV8				(0x0000C000U)
#define RCC_CFGR_PPRE2_DIV16			(0x0000E000U)

/* --------------------------- Macro Declarations End ------------------------------------------------ */

/* --------------------------- Macro Functions Declarations Start ------------------------------------ */



/* --------------------------- Macro Functions Declarations End -------------------------------------- */

/* --------------------------- Data Type Declarations Start ------------------------------------------ */

typedef struct
{
	volatile uint32_t CR;            /*!< RCC clock control register,                                Address offset: 0x00 */
	volatile uint32_t PLLCFGR;       /*!< RCC PLL configuration register,                            Address offset: 0x04 */
	volatile uint32_t CFGR;          /*!< RCC clock configuration register,                          Address offset: 0x08 */
	volatile uint32_t CIR;           /*!< RCC clock interrupt register,                              Address offset: 0x0C */
	volatile uint32_t AHB1RSTR;      /*!< RCC AHB1 peripheral reset register,                        Address offset: 0x10 */
	volatile uint32_t AHB2RSTR;      /*!< RCC AHB2 peripheral reset register,                        Address offset: 0x14 */
	volatile uint32_t AHB3RSTR;      /*!< RCC AHB3 peripheral reset register,                        Address offset: 0x18 */
	uint32_t      RESERVED0;         /*!< Reserved, 0x1C                                                                    */
	volatile uint32_t APB1RSTR;      /*!< RCC APB1 peripheral reset register,                        Address offset: 0x20 */
	volatile uint32_t APB2RSTR;      /*!< RCC APB2 peripheral reset register,                        Address offset: 0x24 */
	uint32_t      RESERVED1[2];      /*!< Reserved, 0x28-0x2C                                                               */
	volatile uint32_t AHB1ENR;       /*!< RCC AHB1 peripheral clock enable register,                 Address offset: 0x30 */
	volatile uint32_t AHB2ENR;       /*!< RCC AHB2 peripheral clock enable register,                 Address offset: 0x34 */
	volatile uint32_t AHB3ENR;       /*!< RCC AHB3 peripheral clock enable register,                 Address offset: 0x38 */
	uint32_t      RESERVED2;         /*!< Reserved, 0x3C                                                                    */
	volatile uint32_t APB1ENR;       /*!< RCC APB1 peripheral clock enable register,                 Address offset: 0x40 */
	volatile uint32_t APB2ENR;       /*!< RCC APB2 peripheral clock enable register,                 Address offset: 0x44 */
	uint32_t      RESERVED3[2];      /*!< Reserved, 0x48-0x4C                                                               */
	volatile uint32_t AHB1LPENR;     /*!< RCC AHB1 peripheral clock enable in low power mode register, Address offset: 0x50 */
	volatile uint32_t AHB2LPENR;     /*!< RCC AHB2 peripheral clock enable in low power mode register, Address offset: 0x54 */
	volatile uint32_t AHB3LPENR;     /*!< RCC AHB3 peripheral clock enable in low power mode register, Address offset: 0x58 */
	uint32_t      RESERVED4;         /*!< Reserved, 0x5C                                                                    */
	volatile uint32_t APB1LPENR;     /*!< RCC APB1 peripheral clock enable in low power mode register, Address offset: 0x60 */
	volatile uint32_t APB2LPENR;     /*!< RCC APB2 peripheral clock enable in low power mode register, Address offset: 0x64 */
	uint32_t      RESERVED5[2];      /*!< Reserved, 0x68-0x6C                                                               */
	volatile uint32_t BDCR;          /*!< RCC Backup domain control register,                        Address offset: 0x70 */
	volatile uint32_t CSR;           /*!< RCC clock control & status register,                       Address offset: 0x74 */
	uint32_t      RESERVED6[2];      /*!< Reserved, 0x78-0x7C                                                               */
	volatile uint32_t SSCGR;         /*!< RCC spread spectrum clock generation register,             Address offset: 0x80 */
	volatile uint32_t PLLI2SCFGR;    /*!< RCC PLLI2S configuration register,                         Address offset: 0x84 */
	volatile uint32_t PLLSAICFGR;    /*!< RCC PLL configuration register,                            Address offset: 0x88 */
	volatile uint32_t DCKCFGR;       /*!< RCC Dedicated Clocks configuration register,               Address offset: 0x8C */
}RCC_TypeDef;

/* --------------------------- Data Type Declarations End -------------------------------------------- */

/* --------------------------- Software Interfaces Declarations Start -------------------------------- */



/* --------------------------- Software Interfaces Declarations End ---------------------------------- */

#endif /* HAL_DRIVERS_COMMON_STM32F4XX_PERIPHERAL_DEFS_H_ */
