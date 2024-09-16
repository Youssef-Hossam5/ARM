/**
* @file Platform_Types.h
* @version 1.0.0
* @brief AUTOSAR Base - Platform dependent data type definitions.
* @details AUTOSAR platform types header file.
* It contains all platform dependent types and symbols.
* Those types must be abstracted in order to become platform and compiler independent.
* @author Youssef Hossam
*/
/*=====================================================
* @project                  : AUTOSAR 4.4.0 MCAL
* @platform                 : ARM
* @peripheral               : STM32F407
* @autosar_version          : 4.4.0 
* @autosar_revision         : ASR_REL_4_0_REV_0000
* @sw_version               : 1.0.0
*====================================================*/

#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H






/************************************************************
                SOURCE FILE VERSION INFORMATION
************************************************************/

/**
 * @brief Parameters that shall be published within the standard types header file and also in the module's description file
          just arbitary numbers as an example  
 */


#define STD_VENDOR_ID                        123


#define PLATFORM_AR_RELEASE_MAJOR_VERSION          4
#define PLATFORM_AR_RELEASE_MINOR_VERSION          4
#define PLATFORM_AR_RELEASE_REVISION_VERSION       0

#define PLATFORM_SW_MAJOR_VERSION                  1
#define PLATFORM_SW_MINOR_VERSION                  0
#define PLATFORM_SW_PATCH_VERSION                  0 

/************************************************************
                Macro Functions
************************************************************/
#define P2CONST(ptrtype, memclass, ptrclass) const ptrtype * memclass ptrclass
#define FUNC(rettype, memclass) rettype memclass



#endif /* #ifndef PLATFORM_TYPES_H */