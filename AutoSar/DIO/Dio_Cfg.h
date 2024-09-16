/**
 * @file    Dio_Cfg.h
 * @version 1.0.0
 * @brief   
 * @details The file Dio_Cfg.h 
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


#ifndef DIO_CFG_H
#define DIO_CFG_H

/************************************************************
                        Includes
************************************************************/
#include "Std_Types.h"

/**
 * @brief Parameters that shall be published within the standard types header file and also in the module's description file
          just arbitary numbers as an example  
 */

#define Dio_VENDOR_ID                        123

#define Dio_AR_RELEASE_MAJOR_VERSION          4
#define Dio_AR_RELEASE_MINOR_VERSION          4
#define Dio_AR_RELEASE_REVISION_VERSION       0

#define Dio_SW_MAJOR_VERSION                  1
#define Dio_SW_MINOR_VERSION                  0
#define Dio_SW_PATCH_VERSION                  0 


/************************************************************
                    Data Type Declarations 
************************************************************/
typedef struct {
    /* Configuration parameters for DIO module */
    uint16 configParam1;  // Example config parameters
} Dio_ConfigType;


#endif  /* DIO_CFG_H */