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

#include "Std_Types.h"

/*------------- Includes End ------------------ */


/*------------- Macro Declarations Start ------------------ */

#define NVIC_BASE 		(0xE000E100UL)
#define NVIC			((NVIC_Type*)NVIC_BASE)
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
TIM1_CC_IRQN = 27					/*!< TIM1 Capture Compare Interrupt */
} IRQn_Type ;




/*------------- Data Type Declarations  End ------------------ */

/*------------- Software Interfaces Declarations   Start ------------------ */
/*------------- Software Interfaces Declarations   End ------------------ */



#endif /* CORTEXM4_CORE_NVIC_H_ */
