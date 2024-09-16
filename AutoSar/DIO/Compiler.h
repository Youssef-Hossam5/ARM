/**
 * @file    Compiler.h
 * @version 1.0.0
 * @brief   AUTOSAR Base - SWS Compiler abstraction.
 * @details The file Compiler.h provides macros for the encapsulation of definitions and declarations.
 * @author  Youssef Hossam
 */

/*=====================================================
 * Project          : AUTOSAR 4.4.0 MCAL
 * Platform         : ARM
 * Peripheral       : STM32F407
 * Autosar Version  : 4.4.0
 * Autosar Revision : ASR_REL_4_0_REV_0000
 * SW Version       : 1.0.0
 *====================================================*/

#ifndef COMPILER_H
#define COMPILER_H


/************************************************************
                        Includes
************************************************************/
#include "Compiler_Cfg.h"


/************************************************************
                SOURCE FILE VERSION INFORMATION
************************************************************/

/**
 * @brief Parameters that shall be published within the standard types header file and also in the module's description file
          just arbitary numbers as an example  
 */

#define STD_VENDOR_ID                        123


#define COMPILER_AR_RELEASE_MAJOR_VERSION          4
#define COMPILER_AR_RELEASE_MINOR_VERSION          4
#define COMPILER_AR_RELEASE_REVISION_VERSION       0

#define COMPILER_SW_MAJOR_VERSION                  1
#define COMPILER_SW_MINOR_VERSION                  0
#define COMPILER_SW_PATCH_VERSION                  0 

#define AUTOMATIC

/**
 * @brief The memory class AUTOMATIC shall be provided as empty definition, used for the declaration
 *        of local pointers.
 */

#define TYPEDEF

/**
 * @brief The memory class TYPEDEF shall be provided as empty definition. This class shall be
 *        used within type definitions, where no memory qualifier can be specified. Can be
 *        necessary for defining pointer types with e.g. the TYPEDEF, where the macros require two
 *        parameters. First parameter can be specified in the type definition (distance to the memory
 *        location cannot be defined at this point), but the second one (memory allocation of the pointer
 *        itself) cannot be referenced by the compiler. Hence memory class TYPEDEF shall be applied.
 */

#define NULL_PTR ((void *)0)

/**
 * @brief The compiler abstraction shall provide the NULL_PTR define with a void pointer to zero 
 *        definition.
 */


#endif /* #ifndef COMPILER_H */
