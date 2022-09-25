/********************************************************************************/
/**    File Name: DIO.h                                                         */
/**                                                                             */
/**  Description: Implementation of the DIO contain interfaces for the module   */
/**-----------------------------------------------------------------------------*/
/**  CODING LANGUAGE :  C                                                       */
/**  TARGET          :  Atmega 32                                               */
/**-----------------------------------------------------------------------------*/
/**               C O P Y R I G H T                                             */
/**-----------------------------------------------------------------------------*/
/** Copyright (c) 2022 by ITI .       All rights reserved.                      */
/**                                                                             */
/** This software is copyright protected and proprietary                        */
/** to ITI.                                                                     */
/**-----------------------------------------------------------------------------*/
/**               A U T H O R   I D E N T I T Y                                 */
/**-----------------------------------------------------------------------------*/
/** ShortName    Name                      Company                              */
/** --------     ---------------------     -------------------------------------*/
/** aaboelno     Ahmed Abo Elnour          ITI.                                 */
/**-----------------------------------------------------------------------------*/
/**               R E V I S I O N   H I S T O R Y                               */
/**-----------------------------------------------------------------------------*/
/** Date        Version   Author       Description                              */
/** ----------  --------  ------      ------------------------------------------*/
/** 21/08/2022   0.1       aaboelno     Initial Creation                        */
/********************************************************************************/

#ifndef   DIO_H
#define   DIO_H

typedef struct {
	
	uint8_t u8PinNum   ;
	uint8_t u8PinValue ;
	tenuErrorStatus enuStatus;
	
}tstrPinMapping ;


#define DIO_u8OUTPUT           ((uint8_t)0x01)
#define DIO_u8INPUT            ((uint8_t)0x00)

/*-------------------------------------------------*/
#define DIO_u8HIGH              ((uint8_t)0x01)
#define DIO_u8LOW               ((uint8_t)0x00)
/*-------------------------------------------------*/
#define DIO_u8ACTIVATE       ((uint8_t)0x01)
#define DIO_u8DEACTIVATE     ((uint8_t)0x00)

/*-------------------------------------------------*/
#define DIO_u8PIN_0     ((uint8_t )0)
#define DIO_u8PIN_1     ((uint8_t )1)
#define DIO_u8PIN_2     ((uint8_t )2)
#define DIO_u8PIN_3     ((uint8_t )3)
#define DIO_u8PIN_4     ((uint8_t )4)
#define DIO_u8PIN_5     ((uint8_t )5)
#define DIO_u8PIN_6     ((uint8_t )6)
#define DIO_u8PIN_7     ((uint8_t )7)

/*-------------------------------------------------*/
#define DIO_u8PIN_8     ((uint8_t ) 8 )
#define DIO_u8PIN_9     ((uint8_t ) 9 )
#define DIO_u8PIN_10    ((uint8_t ) 10)
#define DIO_u8PIN_11    ((uint8_t ) 11)
#define DIO_u8PIN_12    ((uint8_t ) 12)
#define DIO_u8PIN_13    ((uint8_t ) 13)
#define DIO_u8PIN_14    ((uint8_t ) 14)
#define DIO_u8PIN_15    ((uint8_t ) 15)
						
/*-------------------------------------------------*/
#define DIO_u8PIN_16     ((uint8_t ) 16)
#define DIO_u8PIN_17     ((uint8_t ) 17)
#define DIO_u8PIN_18     ((uint8_t ) 18)
#define DIO_u8PIN_19     ((uint8_t ) 19)
#define DIO_u8PIN_20     ((uint8_t ) 20)
#define DIO_u8PIN_21     ((uint8_t ) 21)
#define DIO_u8PIN_22     ((uint8_t ) 22)
#define DIO_u8PIN_23     ((uint8_t ) 23)

/*-------------------------------------------------*/
#define DIO_u8PIN_24     ((uint8_t ) 24)
#define DIO_u8PIN_25     ((uint8_t ) 25)
#define DIO_u8PIN_26     ((uint8_t ) 26)
#define DIO_u8PIN_27     ((uint8_t ) 27)
#define DIO_u8PIN_28     ((uint8_t ) 28)
#define DIO_u8PIN_29     ((uint8_t ) 29)
#define DIO_u8PIN_30     ((uint8_t ) 30)
#define DIO_u8PIN_31     ((uint8_t ) 31)

/*-------------------------------------------------*/

/********************************************************************************/
/** Description : Scan cfg file and Apply on pins registers the configurations  */
/********************************************************************************/

void DIO_voidInit(void);

/* Description : function write DIO_u8HIGH or DIO_u8LOW on Pin start 0 to 31 */
tenuErrorStatus DIO_enuWritePin(uint8_t u8PinNumCpy , uint8_t u8PinValueCpy);


tenuErrorStatus DIO_enuReadPin(uint8_t u8PinNumCpy , uint8_t * pu8PinValueCpy);

tenuErrorStatus DIO_enuPullWrite(uint8_t u8PinNumCpy , uint8_t u8PinStateCpy);

tenuErrorStatus DIO_enuWriteBus(tstrPinMapping * pastrPinMappingCpy , uint8_t u8SizeCpy );

tenuErrorStatus DIO_enuReadBus(tstrPinMapping * pastrPinMappingCpy , uint8_t u8SizeCpy );

tenuErrorStatus DIO_enuWritePinDir(uint8_t u8PinNumCpy , uint8_t u8PinDirCpy);

tenuErrorStatus DIO_enuTogglePin(uint8_t u8PinNumCpy);

#endif

