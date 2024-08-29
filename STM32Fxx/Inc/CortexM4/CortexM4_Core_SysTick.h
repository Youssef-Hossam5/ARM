/**
 ******************************************************************************
 * @file           : CortexM4_Core_SysTick.h
 * @author         : Youssef Hossam Saad
 * @brief          :
 ******************************************************************************
 */

#ifndef CORTEXM4_CORTEXM4_CORE_SYSTICK_H_
#define CORTEXM4_CORTEXM4_CORE_SYSTICK_H_

/* --------------------------- Includes Start -------------------------------------------------------- */
#include "Common/Std_Types.h"
#include "CortexM4/CortexM4_Core_SysTick_Cfg.h"

/* --------------------------- Includes End ---------------------------------------------------------- */

/* --------------------------- Macro Declarations Start ---------------------------------------------- */

#define SYSTICK_BASE					(0xE000E010UL)
#define SYSTICK							((SysTick_Type *)SYSTICK_BASE)

#define SysTick_CTRL_ENABLE_MASK		(0x1UL << 0U)
#define SysTick_CTRL_TICKINT_MASK		(0x1UL << 1U)
#define SysTick_CTRL_CLKSOURCE_MASK		(0x1UL << 2U)
#define SysTick_CTRL_COUNTFLAG_MASK		(0x1UL << 16U)

#define SysTick_LOAD_RELAOD_MASK		(0x00FFFFFFUL)

#define SysTick_SingleInterval_Mode		0
#define SysTick_PeriodicInterval_Mode	1

/* --------------------------- Macro Declarations End ------------------------------------------------ */

/* --------------------------- Macro Functions Declarations Start ------------------------------------ */



/* --------------------------- Macro Functions Declarations End -------------------------------------- */

/* --------------------------- Data Type Declarations Start ------------------------------------------ */

typedef struct {
	volatile uint32_t CTRL;      	/*!< SysTick Control and Status Register (SysTick_CTRL),       Address offset: 0x00 */
	volatile uint32_t LOAD;      	/*!< SysTick Reload Value Register (SysTick_LOAD),             Address offset: 0x04 */
	volatile uint32_t VAL;       	/*!< SysTick Current Value Register (SysTick_VAL),             Address offset: 0x08 */
	volatile const uint32_t CALIB; 	/*!< SysTick Calibration Value Register (SysTick_CALIB),       Address offset: 0x0C */
}SysTick_Type;

typedef void (* ptrFunction)(void);

/* --------------------------- Data Type Declarations End -------------------------------------------- */

/* --------------------------- Software Interfaces Declarations Start -------------------------------- */

uint8_t SysTick_Init  				(uint32_t SysTick_Ticks);
void 	 SysTick_DeInit				(void);
void	 SysTick_WaitBlocking		(uint32_t SysTick_Ticks);
void	 SysTick_SingleInterval		(uint32_t SysTick_Ticks, ptrFunction *CallBack);
void	 SysTick_PeriodicInterval	(uint32_t SysTick_Ticks, ptrFunction *CallBack);
uint32_t SysTick_GetRemainingTicks	(void);
uint32_t SysTick_GetElapsedTicks	(void);

/* --------------------------- Software Interfaces Declarations End ---------------------------------- */

#endif /* CORTEXM4_CORTEXM4_CORE_SYSTICK_H_ */
