/**
 * @file    Std_Types.h
 * @version 1.0.0
 * @brief   AUTOSAR Base - Standard types definition.
 * @details AUTOSAR standard types header file.
 *          It contains all types that are used across several modules of the basic software and that are platform and compiler independent.
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

#ifndef STD_TYPES_H
#define STD_TYPES_H

/* Include compiler abstraction */
#include "Compiler.h"
#include "Platform_Types.h"

/************************************************************
                SOURCE FILE VERSION INFORMATION
************************************************************/

/**
 * @brief Parameters that shall be published within the standard types header file and also in the module's description file
          just arbitary numbers as an example  
 */
#define STD_VENDOR_ID                        123


#define STD_AR_RELEASE_MAJOR_VERSION          4
#define STD_AR_RELEASE_MINOR_VERSION          4
#define STD_AR_RELEASE_REVISION_VERSION       0

#define STD_SW_MAJOR_VERSION                  1
#define STD_SW_MINOR_VERSION                  0
#define STD_SW_PATCH_VERSION                  0 


/************************************************************
                 FILE VERSION CHECKS
************************************************************/
/* Check if source file and Platform_Types header file are of the same Autosar version */
#if ((STD_AR_RELEASE_MAJOR_VERSION != PLATFORM_AR_RELEASE_MAJOR_VERSION) || \
     (STD_AR_RELEASE_MINOR_VERSION != PLATFORM_AR_RELEASE_MINOR_VERSION))
#error "AutoSar Version Numbers of Std_Types.h and Platform_Types.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if source file and Compiler header file are of the same Autosar version */
#if ((STD_AR_RELEASE_MAJOR_VERSION != COMPILER_AR_RELEASE_MAJOR_VERSION) || \
     (STD_AR_RELEASE_MINOR_VERSION != COMPILER_AR_RELEASE_MINOR_VERSION))
#error "Autosar Version Numbers of Std_Types.h and Compiler.h are different"
#endif

/************************************************************
                CONSTANTS
************************************************************/


/**
* @brief PHYSICAL STATE 5V OR 3.3V.
* @implements SymbolDefinitions_enumeration 
*/
#define STD_HIGH 0x01

/**
* @brief PHYSICAL STATE 0V.
* @implements SymbolDefinitions_enumeration 
*/
#define STD_LOW 0x00

/**
* @brief LOGICAL STATE ACTIVE.
* @implements SymbolDefinitions_enumeration 
*/
#define STD_ACTIVE 0x01

/**
* @brief LOGICAL STATE IDLE.
* @implements SymbolDefinitions_enumeration 
*/
#define STD_IDLE 0x01

/**
* @brief ON STATE .
* @implements SymbolDefinitions_enumeration 
*/
#define STD_ON 0x01
/**
* @brief OFF STATE .
* @implements SymbolDefinitions_enumeration 
*/
#define STD_OFF 0x01


/**
* @brief Return code for failure/error.
* @implements SymbolDefinitions_enumeration
 */
#define E_NOT_OK 0x01


#ifndef STATUSTYPEDEFINED
#define STATUSTYPEDEFINED
/* @brief success return code */
#define E_OK 0x00

/**
 * @brief This type is defined for OSEK compliance.
 */
typedef unsigned char StatusType;

#endif

typedef unsigned char uint8;
typedef unsigned short uint16;
/**  
*    @brief This type can be used as standard API return type which is shared between the RTE and the BSW modules. 
*    @implements Std_ReturnType_type
*/
typedef uint8 Std_ReturnType;


/**  
*    @brief This type can be used as standard API return type which is shared between the RTE and the BSW modules. 
*    @implements Std_ReturnType_type
*/
typedef struct {
    uint16 vendorID;                 /*  module vendor ID */
    uint16 moduleID;                 /*  module ID */
    uint8 sw_major_version;          /*  BSW module major version */
    uint8 sw_minor_version;          /*  BSW module minor version */   
    uint8 sw_patch_version;          /*  BSW module software patch version */
} Std_VersionInfoType;

#endif /* STD_TYPES_H */



#endif /* #ifndef STD_TYPES_H */
