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
#ifndef _EXTI2_CONFIG_H
#define _EXTI2_CONFIG_H


/****************************************************************/
/** !comment : Please Enter the Sense Mode						*/
/** 		   SENSE_MODE can be : 								*/
/*					    			FALLING 					*/
/*						    		RISING 						*/
/****************************************************************/

#define EXTI2_SENSE_MODE		RISING


#endif	/**!comment : End of the gaurd [_EXTI2_CONFIG_H]		   **/