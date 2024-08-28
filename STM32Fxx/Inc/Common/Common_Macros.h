/**
 ******************************************************************************
 * @file           : Common_Macros.h
 * @author         : Youssef Hossam Saad
 * @brief          : Bitwise opertations
 ******************************************************************************
 */


#ifndef COMMON_COMMON_MACROS_H_
#define COMMON_COMMON_MACROS_H_

/* --------------------------- Includes Start -------------------------------------------------------- */



/* --------------------------- Includes End ---------------------------------------------------------- */

/* --------------------------- Macro Declarations Start ---------------------------------------------- */



/* --------------------------- Macro Declarations End ------------------------------------------------ */

/* --------------------------- Macro Functions Declarations Start ------------------------------------ */

#define SET_BIT(REG , BIT_MASK)					((REG) |= (BIT_MASK))
#define CLEAR_BIT(REG , BIT_MASK)				((REG) &= ~(BIT_MASK))
#define TOGGLE_BIT(REG , BIT_MASK)				((REG) ^= (BIT_MASK))
#define READ_BIT(REG , BIT_MASK)				((REG) & (BIT_MASK))

#define READ_REG(REG)							((REG))
#define WRITE_REG(REG, VAL)						((REG) = (VAL))
#define MODIFY_REG(REG, CLEARMASK, SETMASK)		(WRITE_REG((REG), (((READ_REG(REG)) & (~(CLEARMASK))) | (SETMASK))))


/* --------------------------- Macro Functions Declarations End -------------------------------------- */

/* --------------------------- Data Type Declarations Start ------------------------------------------ */



/* --------------------------- Data Type Declarations End -------------------------------------------- */

/* --------------------------- Software Interfaces Declarations Start -------------------------------- */



/* --------------------------- Software Interfaces Declarations End ---------------------------------- */


#endif /* COMMON_COMMON_MACROS_H_ */
