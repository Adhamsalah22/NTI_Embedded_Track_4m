/************************************************************/
/* 	Author 	 	 : Adham Salah Abdelaziz                    */
/* 	Date   		 : 25 Feb 2023                              */
/* 	Version 	 : 1V 									    */
/* 	Description	 : Configure Sense Mode [config.h]          */
/************************************************************/



/****************************************************************/
/* Description   : Guard to protect this File from include more */
/*                 than one time .                              */
/****************************************************************/
#ifndef _EXTI0_CONFIG_H
#define _EXTI0_CONFIG_H


/****************************************************************/
/** !comment : Please Enter the Sense Mode						*/
/** 		   SENSE_MODE can be : 								*/
/*					    			FALLING 					*/
/*						    		RISING 						*/
/*							    	LOW_LEVEL					*/
/*								    IOT ( Interrupt On Change ) */
/****************************************************************/

#define EXTI0_SENSE_MODE		FALLING


#endif	/**!comment : End of the gaurd [_EXTI0_CONFIG_H]		   **/