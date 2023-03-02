/****************************************************************/
/* 	 Author 	 	    :    Adham Salah Abdelaziz              */
/*   Date   		    :    25 Feb 2023 				    	*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:   TIMER0_int                          */
/****************************************************************/

#ifndef _TIMER0_INT_H
#define _TIMER0_INT_H

#include "../LIB/std_types.h"

void TIMER0_void_Init(void);

void TIMER0_void_SetTimerReg(u8 Copy_uint8Val);

void TIMER0_void_SetCompareVal(u8 Copy_uint8Val);

void TIMER0_void_EnableOVInt(void);

void TIMER0_void_DisableOVInt(void);

void TIMER0_void_EnableCTCInt(void);

void TIMER0_void_DisableCTCInt(void);

void TIMER0_void_SetOVCallBack(void (*Copy_ptr) (void) ) ;

void TIMER0_void_SetCTCCallBack(void (*Copy_ptr) (void) ) ;

u8 TIMER0_void_GetTimerReg(void);


#endif