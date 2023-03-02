/****************************************************************/
/* 	 Author 	 	    :    Adham Salah Abdelaziz              */
/*   Date   		    :    25 Feb 2023 				    	*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:   TIMER2_int                          */
/****************************************************************/

#ifndef _TIMER2_INT_H
#define _TIMER2_INT_H

#include "../LIB/std_types.h"

void TIMER2_void_Init(void);

void TIMER2_void_SetTimerReg(u8 Copy_uint8Val);

void TIMER2_void_SetCompareVal(u8 Copy_uint8Val);

void TIMER2_void_EnableOVInt(void);

void TIMER2_void_DisableOVInt(void);

void TIMER2_void_EnableCTCInt(void);

void TIMER2_void_DisableCTCInt(void);

void TIMER2_void_SetOVCallBack(void (*Copy_ptr) (void) ) ;

void TIMER2_void_SetCTCCallBack(void (*Copy_ptr) (void) ) ;

u8 TIMER2_void_GetTimerReg(void);


#endif
