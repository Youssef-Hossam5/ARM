/**
 ******************************************************************************
 * @file           : CortexM4_Core_NVIC.h
 * @author         : Youssef Hossam Saad
 * @brief          :
 ******************************************************************************
 */

#ifndef CORTEXM4_CORE_NVIC_H_
#define CORTEXM4_CORE_NVIC_H_

/*------------- Includes Start ------------------ */
#include <stdint.h>


/*------------- Includes End ------------------ */


/*------------- Macro Declarations Start ------------------ */

#define NVIC_BASE 		(0xE000E100UL)
#define NVIC			((NVIC_Type*)NVIC_BASE)

#define NVIC_PRI_BITS	(4U)

/*------------- Macro Declarations End ------------------ */

/*------------- Macro Functions Start ------------------ */
/*------------- Macro Functions End ------------------ */


/*------------- Data Type Declarations Start ------------------ */


/*
 * @brief: structure type to access	the Nested Vector Interrupt Controller NVIC
*/
typedef struct
{
volatile uint32_t ISER[8U];		/*!< Offset: 0x000 (R/W) Interrupt Set Enable Register */
uint32_t RESERVEDO[24U];
volatile uint32_t ICER[8U];	   	/*!< Offset: 0x080 (R/W) Interrupt Clear Enable Register */
uint32_t RSERVED1[24U];
volatile uint32_t ISPR[8U];	    /*!< offset: 0x100 (R/W) Interrupt Set Pending Register */
uint32_t RESERVED2[24U];
volatile uint32_t ICPR[8U];     /*!< Offset: 0x180 (R/W) Interrupt Clear Pending Register */
uint32_t RESERVED3[24U];
volatile uint32_t IABR[8U];		/*!< Offset: 0x200 (R/W) Interrupt Active bit Register */
uint32_t RESERVED4[56U];
volatile uint8_t IP[240U] ;  	/*!< offset: 0x300 (R/W) Interrupt Priority Register (8Bit wide) */
uint32_t RESERVED5[644U];
volatile uint32_t STIR;			/*!< offset: 0xE00 ( /w) Software Trigger Interrupt Register */
} NVIC_Type;



/**
  * @brief STM32F4XX Interrupt Number Definition, according to the selected device
  * in @ref Library_configuration_section
*/

typedef enum
{
/*--------- Cortex-M4 Processor Exceptions Numbers ---------------*/

  NonMaskableInt_IRQn = -14, 		/*!< 2 Non Maskable Interrupt */
  MemoryManagement_IRQn = -12, 		/*!< 4 Cortex-M4 Memory Management Interrupt*/
  BusFault_IRQn = -11,  			/*!< 5 Cortex-M4 Bus Fault Interrupt */
  UsageFault_IRQn = -10, 			/*!< 6 Cortex-M4 Usage Fault Interrupt */
  SVCALL_IRQn= -5,  				/*!< 11 Cortex-M4 SV Call Interrupt*/
  DebugMonitor_IRQn = -4,  			/*!< 12 Cortex-M4 Debug Monitor Interrupt*/
  PendSV_IRQn = -2, 				/*!< 14 Cortex-M4 Pend SV Interrupt */
  SysTick_IRQn = -1,  				/*!< 15 Cortex-M4 System Tick Interrupt*/

/*--------- STM32 Specific Interrupt Numbers --------------- */
WWDG_IRQn 					=0,						/*!< Window WatchDog Interrupt */
PVD_IRQN 					=1,					    /*!< PVD through EXTI Line detection Interrupt */
TAMP_STAMP_IRQn 			=2,   				/*!< Tamper and TimeStamp interrupts through the EXTI line */
RTC_WKUP_IRQN 				=3,					/*!< RTC Wakeup interrupt through the EXTI line */
FLASH_IRQN					=4,						/*!< FLASH global Interrupt */
RCC_IRQN					=5,						/*!< RCC global Interrupt */
EXTIO_IRQN 					=6,						/*!< EXTI Line0 Interrupt */
EXTI1_IRQN 					=7, 					/*!< EXTI Linel Interrupt */
EXTI2_IRQN 					=8, 					/*!< EXTI Line2 Interrupt */
EXTI3_IRQN = 9,  					/*!< EXTI Line3 Interrupt */
EXTI4_IRQN = 10,				    /*!< EXTI Line4 Interrupt */
DMA1_Stream1_IRQn = 12, 		    /*!< DMA1 Stream 1 global Interrupt */
DMA1_Stream2_IRQn = 13,             /*!< DMA1 Stream 2 global Interrupt */
DMA1_Stream0_IRQn = 11,             /*!< DMA1 Stream 0 global Interrupt */
DMA1_Stream3_IRQn = 14,             /*!< DMA1 Stream 3 global Interrupt */
DMA1_Stream4_IRQn = 15,             /*!< DMA1 Stream 4 global Interrupt */
DMA1_Stream5_IRQn = 16,             /*!< DMA1 Stream 5 global Interrupt */
DMA1_Stream6_IRQn = 17,             /*!< DMA1 Stream 6 global Interrupt */
ADC_IRQN = 18,                      /*!< ADC1, ADC2 and ADC3 global Interrupts */
CAN1_TX_IRQN= 19,                   /*!< CAN1 TX Interrupt */
CAN1_RXO_IRQn= 20,					/*!< CAN1 RX® Interrupt */
CAN1_RX1_IRQN= 21,                  /*!< CAN1 RX1 Interrupt */
CAN1_SCE_IRQn= 22,					/*!< CAN1 SCE Interrupt */
EXTI9_5_IRQN= 23,					/*!< External Line [9:5] Interrupts */
TIM1_BRK_TIM9_IRQN= 24, 			/*!< TIM1 Break interrupt and TIM9 global interrupt */
TIM1_UP_TIM10_IRQN= 25, 			/*!< TIM1 Update Interrupt and TIM10 global interrupt */
TIM1_TRG_COM_TIM11_IRQN= 26,		/*!< TIM1 Trigger and Commutation Interrupt and TIM11 global interrupt */
TIM1_CC_IRQN = 27,					/*!< TIM1 Capture Compare Interrupt */
TIM2_IRQN 						= 28,
TIM3_IRQN 						= 29,
TIM4_IRQN						= 30,
I2C1_EV_IRQN 					= 31,
I2C1_ER_IRQN 					= 32,
I2C2_EV_IRQN 					= 33,
I2C2_ER_IRQN 					= 34,
SPI1_IRQN 						= 35,
SPI2_IRQN 						= 36,
USART1_IRQN						= 37,
USART2_IRQN					= 38,
USART3_IRQN 						= 39,
EXTI15_10_IRQN 					= 40,
RTC_Alarm_IRQN 					= 41,
OTG_FS_WKUP_IRQN 				= 42,
TIM8_BRK_TIM12_IRQN 				= 43,
TIM8_UP_TIM13_IRQN 				= 44,
TIM8_TRG_COM_TIM14_IRQN 			= 45,
TIM8_CC_IRQN 					= 46,
DMA1_Stream7_IRQN 				= 47,
FSMC_IRQN 						= 48,
SDIO_IRQN 						= 49,
TIM5_IRQN 						= 50,
SPI3_IRQN 						= 51,
UART4_IRQN 						= 52,
UART5_IRQN						= 53,
TIM6_DAC_IRQN 					= 54,
TIM7_IRQN 						= 55,
DMA2_Stream0_IRQN 				= 56,
DMA2_Stream1_IRQN 				= 57,
DMA2_Stream2_IRQN 				= 58,
DMA2_Stream3_IRQN 				= 59,
DMA2_Stream4_IRQN 				= 60,
ETH_IRQN 						= 61,
ETH_WKUP_IRQN 					= 62,
CAN2_TX_IRQN 					= 63,
CAN2_RX0_IRQN 					= 64,
CAN2_RX1_IRQN 					= 65,
CAN2_SCE_IRQN 					= 66,
OTG_FS_IRQN 						= 67,
DMA2_Stream5_IRQN 				= 68,
DMA2_Stream6_IRQN 				= 69,
DMA2_Stream7_IRQN 				= 70,
USART6_IRQN 						= 71,
I2C3_EV_IRQN 					= 72,
I2C3_ER_IRQN 					= 73,
OTG_HS_EP1_OUT_IRQN 				= 74,
OTG_HS_EP1_IN_IRQN 				= 75,
OTG_HS_WKUP_IRQN 				= 76,
OTG_HS_IRQN						= 77,
DCMI_IRQN 						= 78,
CRYP_IRQN 						= 79,
HASH_RNG_IRQN 					= 80,
FPU_IRQN 						= 81,
}IRQn_Type;



/*------------- Data Type Declarations  End ------------------ */

/*------------- Software Interfaces Declarations   Start ------------------ */
void NVIC_EnableIRQ(IRQn_Type IRQn);
void NVIC_DisableIRQ(IRQn_Type IRQn);
void NVIC_SetPendingIRQ(IRQn_Type IRQn);
void NVIC_ClearPendingIRQ(IRQn_Type IRQn);
uint32_t NVIC_GetActive(IRQn_Type IRQn);
void NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority);
uint32_t NVIC_GetPriority(IRQn_Type IRQn);

/*------------- Software Interfaces Declarations   End ------------------ */



#endif /* CORTEXM4_CORE_NVIC_H_ */
