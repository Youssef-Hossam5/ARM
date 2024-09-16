/**
 * @file    Dio.h
 * @version 1.0.0
 * @brief   
 * @details The file Dio.h 
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


#ifndef DIO_H
#define DIO_H

/************************************************************
                        Includes
************************************************************/
#include "Std_Types.h"
#include "Dio_Cfg.h"

/**
 * @brief Parameters that shall be published within the standard types header file and also in the module's description file
          just arbitary numbers as an example  
 */

#define Dio_VENDOR_ID                        123
#define Dio_MODULE_ID                        120    /* each module has it's unique identifier */

#define Dio_AR_RELEASE_MAJOR_VERSION          4
#define Dio_AR_RELEASE_MINOR_VERSION          4
#define Dio_AR_RELEASE_REVISION_VERSION       0

#define Dio_SW_MAJOR_VERSION                  1
#define Dio_SW_MINOR_VERSION                  0
#define Dio_SW_PATCH_VERSION                  0 





/************************************************************
                        Function Prototypes
************************************************************/

#define DIO_START_SEC_CODE
#include "MemMap.h"


FUNC(void,DIO_CODE) Dio_init (
    P2CONST(Dio_ConfigType,AUTOMATIC,DIO_APPL_CONST) ConfigPtr
);

/* FUNC(void, DIO_CODE) Dio_WriteChannel(
    CONST(Dio_ChannelType, AUTOMATIC) ChannelId,
    CONST(Dio_LevelType, AUTOMATIC) Level
);

FUNC(Dio_PortLevelType, DIO_CODE) Dio_ReadPort(
    CONST(Dio_PortType, AUTOMATIC) PortId
);

FUNC(void, DIO_CODE) Dio_WritePort(
    CONST(Dio_PortType, AUTOMATIC) PortId,
    CONST(Dio_PortLevelType, AUTOMATIC) Level
);

FUNC(Dio_PortLevelType, DIO_CODE) Dio_ReadChannelGroup(
    P2CONST(Dio_ChannelGroupType, AUTOMATIC, DIO_APPL_CONST) ChannelGroupIdPtr
);

FUNC(void, DIO_CODE) Dio_WriteChannelGroup(
    P2CONST(Dio_ChannelGroupType, AUTOMATIC, DIO_APPL_CONST) ChannelGroupIdPtr,
    CONST(Dio_PortLevelType, AUTOMATIC) Level
);
 */

#define DIO_STOP_SEC_CODE
#include "MemMap.h"


#endif  /* DIO_H */