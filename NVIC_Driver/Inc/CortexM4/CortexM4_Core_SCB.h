/**
 ************************************************************************************
 * @file           : CortexM4_Core_SCB.h
 * @author         : Youssef Hossam Saad
 * @brief          : Contains Declarations and Configurations for System control Block
 *************************************************************************************
 */

#ifndef CORTEXM4_CORE_SCB_H_
#define CORTEXM4_CORE_SCB_H_


/*------------- Includes Start ------------------ */
#include <stdint.h>

/*------------- Includes End ------------------ */


/*------------- Macro Declarations Start ------------------ */

/*	Memory Mapping for hardware	*/
#define SCB_BASE   (0xE000ED00UL)		/* System Control Block Base Address */
#define SCB         ((SCB_Type*)SCB_BASE)


#define SCB_AIRCR_VECTKEY		(0x5FA)


#define SCB_AIRCR_PRIGROUP_POS	(8U)		/* SCB AIRCR: PIRGROUP Position */
#define SCB_AIRCR_VECTKEY_POS	(16U)		/* SCB AIRCR: VECTKEYSTAT Position */

/* Preemption Priority Group	*/
#define SCB_PRIORITYGROUP_0		(0x00000007U)
#define SCB_PRIORITYGROUP_1		(0x00000006U)
#define SCB_PRIORITYGROUP_2		(0x00000005U)
#define SCB_PRIORITYGROUP_3		(0x00000004U)
#define SCB_PRIORITYGROUP_4		(0x00000003U)


/*------------- Macro Declarations End ------------------ */

/*------------- Macro Functions Start ------------------ */
/*------------- Macro Functions End ------------------ */

/*------------- Data Type Declarations Start ------------------ */

typedef struct {
	volatile uint32_t CPUID;    	/*!< Offset: 0x000 (R/W) CPUID Base Register */
	volatile uint32_t ICSR; 	    /*!< Offset: 0x004 (R/W)Interrupt Control and State Register */
	volatile uint32_t VTOR; 		/*!< Offset: 0x008 (R/W)  Vector Table Offset Register */
	volatile uint32_t AIRCR; 		/*!< Offset: 0x00C (R/W) Application Interrupt and Reset Control Resgister */
	volatile uint32_t SCR; 			/*!< Offset: 0x010 (R/W) System Control Register  */
	volatile uint32_t CCR; 			/*!< Offset: 0x014 (R/W) Configuration Control Register */
	volatile uint32_t SHPR1; 		/*!< Offset: 0x018 (R/W) System Handler Priority Register 1 */
	volatile uint32_t SHPR2; 		/*!< Offset: 0x01C (R/W) System Handler Priority Register 2 */
	volatile uint32_t SHPR3; 		/*!< Offset: 0x020 (R/W) System Handler Priority Register 3 */
	volatile uint32_t SHCSR; 		/*!< Offset: 0x024 (R/W) System Handler Control and State Register */
	volatile uint32_t CFSR; 		/*!< Offset: 0x028 (R/W) Configurable Fault Status Register */
}SCB_Type;


/*------------- Data Type Declarations  End ------------------ */

/*------------- Software Interfaces Declarations   Start ------------------ */

/*
 @brief:    Set Priority Grouping
 @details:  Sets the priority grouping field using the required unlock sequence.
		    The parameter PriorityGroup is assigned to the field SCB->AIRCR [10:8] PRIGROUP field.
		    Only values from 0..7 are used.
		    In case of a conflict between priority grouping and available
 @param[in] PriorityGroup Priority grouping field.
 */
void SCB_SetPriorityGrouping (uint32_t PriorityGroup);
uint32_t SCB_GetPriortyGrouping(void);
/*------------- Software Interfaces Declarations   End ------------------ */



#endif /* CORTEXM4_CORE_SCB_H_ */
