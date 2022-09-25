/*
 * main.c
 *
 *  Created on: Sep 13, 2022
 *      Author: Acer
 */
#include "Types.h"
#include "BIT_Math.h"
#include "avr/delay.h"

#include "DIO.h"
#include "GIE.h"
#include "EXTINT0.h"


#include"LED.h"


void ISR_func(void);
uint8_t u8flag = 0;

void main(void)
{
	GIE_voidDisable();
	DIO_voidInit();
	EXTINT0_voidInit();
	EXTINT0_voidEnable();
	GIE_voidEnable();



	DIO_enuPullWrite(DIO_u8PIN_26,DIO_u8ACTIVATE);

	//uint8_t u8temp;
	while(1)
	{
		//u8flag = 0;
		/*switch (u8flag)
		{*/
		//case 0:
		EXTINT0_voidSetCallBack(ISR_func);
		/*if(u8flag)
		{
			LED_enuWriteValue(LED_u8NUM_6,LED_u8ON);
			_delay_ms(3000);
		}*/
		/*Green Cars  ON  |  Red pedestrian ON*/
		LED_enuWriteValue(LED_u8NUM_2,LED_u8OFF);
		LED_enuWriteValue(LED_u8NUM_3,LED_u8OFF);
		LED_enuWriteValue(LED_u8NUM_0,LED_u8ON);
		LED_enuWriteValue(LED_u8NUM_5,LED_u8ON);
		_delay_ms(3000);

		/*Yellow Cars  ON  |  Yellow pedestrian ON*/
		LED_enuWriteValue(LED_u8NUM_0,LED_u8OFF);
		LED_enuWriteValue(LED_u8NUM_5,LED_u8OFF);
		LED_enuWriteValue(LED_u8NUM_1,LED_u8ON);
		LED_enuWriteValue(LED_u8NUM_4,LED_u8ON);
		_delay_ms(3000);

		/*Red Cars  ON  |  Green pedestrian ON*/
		LED_enuWriteValue(LED_u8NUM_1,LED_u8OFF);
		LED_enuWriteValue(LED_u8NUM_4,LED_u8OFF);
		LED_enuWriteValue(LED_u8NUM_2,LED_u8ON);
		LED_enuWriteValue(LED_u8NUM_3,LED_u8ON);
		_delay_ms(3000);
		//break;

		/*case 1:
			DIO_enuReadPin(DIO_u8PIN_0,&u8temp);
			if(!u8temp)
			{
				LED_enuWriteValue(LED_u8NUM_0,LED_u8OFF);
				LED_enuWriteValue(LED_u8NUM_5,LED_u8OFF);
				LED_enuWriteValue(LED_u8NUM_1,LED_u8ON);
				LED_enuWriteValue(LED_u8NUM_4,LED_u8ON);
				_delay_ms(1000);

				LED_enuWriteValue(LED_u8NUM_1,LED_u8OFF);
				LED_enuWriteValue(LED_u8NUM_4,LED_u8OFF);
				LED_enuWriteValue(LED_u8NUM_2,LED_u8ON);
				LED_enuWriteValue(LED_u8NUM_3,LED_u8ON);
				_delay_ms(1000);
			}
			DIO_enuReadPin(DIO_u8PIN_1,&u8temp);
			if(!u8temp)
			{
				LED_enuWriteValue(LED_u8NUM_1,LED_u8ON);
				LED_enuWriteValue(LED_u8NUM_4,LED_u8ON);
				_delay_ms(1000);

				LED_enuWriteValue(LED_u8NUM_1,LED_u8OFF);
				LED_enuWriteValue(LED_u8NUM_4,LED_u8OFF);
				LED_enuWriteValue(LED_u8NUM_2,LED_u8ON);
				LED_enuWriteValue(LED_u8NUM_3,LED_u8ON);
				_delay_ms(1000);
			}
			DIO_enuReadPin(DIO_u8PIN_2,&u8temp);
			if(!u8temp)
			{
				LED_enuWriteValue(LED_u8NUM_2,LED_u8ON);
				LED_enuWriteValue(LED_u8NUM_4,LED_u8ON);
				_delay_ms(1000);
				LED_enuWriteValue(LED_u8NUM_3,LED_u8ON);
			}*/
	}
}


void ISR_func(void)
{
	//u8flag = 1;
	LED_enuWriteValue(LED_u8NUM_6,LED_u8ON);
	_delay_ms(3000);
}

//LED_enuWriteValue(LED_u8NUM_6,LED_u8ON);
	//_delay_ms(3000);
	/*uint8_t u8temp;
	DIO_enuReadPin(DIO_u8PIN_0,&u8temp);
	if(u8temp)
	{
		LED_enuWriteValue(LED_u8NUM_0,LED_u8OFF);
		LED_enuWriteValue(LED_u8NUM_5,LED_u8OFF);
		LED_enuWriteValue(LED_u8NUM_1,LED_u8ON);
		LED_enuWriteValue(LED_u8NUM_4,LED_u8ON);
		_delay_ms(3000);

		LED_enuWriteValue(LED_u8NUM_1,LED_u8OFF);
		LED_enuWriteValue(LED_u8NUM_4,LED_u8OFF);
		LED_enuWriteValue(LED_u8NUM_2,LED_u8ON);
		LED_enuWriteValue(LED_u8NUM_3,LED_u8ON);
		_delay_ms(3000);
	}
	DIO_enuReadPin(DIO_u8PIN_1,&u8temp);
	if(u8temp)
	{
		LED_enuWriteValue(LED_u8NUM_1,LED_u8ON);
		LED_enuWriteValue(LED_u8NUM_4,LED_u8ON);
		_delay_ms(3000);

		LED_enuWriteValue(LED_u8NUM_1,LED_u8OFF);
		LED_enuWriteValue(LED_u8NUM_4,LED_u8OFF);
		LED_enuWriteValue(LED_u8NUM_2,LED_u8ON);
		LED_enuWriteValue(LED_u8NUM_3,LED_u8ON);
		_delay_ms(3000);
	}
	DIO_enuReadPin(DIO_u8PIN_2,&u8temp);
	if(u8temp)
	{
		LED_enuWriteValue(LED_u8NUM_2,LED_u8ON);
		LED_enuWriteValue(LED_u8NUM_4,LED_u8ON);
		_delay_ms(3000);
		LED_enuWriteValue(LED_u8NUM_4,LED_u8OFF);
		LED_enuWriteValue(LED_u8NUM_3,LED_u8ON);
		_delay_ms(3000);
	}
	LED_enuWriteValue(LED_u8NUM_6,LED_u8ON);
	_delay_ms(3000);*/


