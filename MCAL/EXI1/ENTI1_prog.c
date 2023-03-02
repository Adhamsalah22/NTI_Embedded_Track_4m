/************************************************************/
/* 	Author 	 	 : Adham Salah Abdelaziz                    */
/* 	Date   		 : 25 Feb 2023                              */
/* 	Version 	 : 1V 									    */
/* 	Description	 : prog.c for EXT1		                    */
/************************************************************/


/****************************************************************/
/*********************** STD LIB DIRECTIVES *********************/
/****************************************************************/

#include "../LIB/std_types.h"
#include "../LIB/bit_math.h"


/****************************************************************/
/*********************** Component DIRECTIVES *******************/
/****************************************************************/

#include "EXTI1_int.h"
#include "EXTI1_config.h"
#include "EXTI1_private.h" 


/***********************************************************/
/**!comment   :  pointer to function for callback	       */
/***********************************************************/



/****************************************************************/
/*********************** Function Implementation  ***************/
/****************************************************************/
#define NULL (void*) 0

/****************************************************************/
/* Description    :  This function used to initialize EXT1      */
/*					 Inputs : void 								*/
/*					 return : void		 						*/
/****************************************************************/



void EXT1_voidInit (void)
{
	SET_BIT(SREG,7);
	/*  ( if / else if ) condition for Macros */
	#if EXTI1_SENSE_MODE == IOC
	SET_BIT(MCUCR , 0);
	CLEAR_BIT(MCUCR , 1);
	
	#elif EXTI1_SENSE_MODE == RISING
	SET_BIT(MCUCR , 0);
	SET_BIT(MCUCR , 1);
	
	#elif EXTI1_SENSE_MODE == FALLING
	CLEAR_BIT(MCUCR , 0);
	SET_BIT(MCUCR , 1);
	
	#elif EXTI1_SENSE_MODE == LOW_LEVEL
	CLEAR_BIT(MCUCR , 0);
	CLEAR_BIT(MCUCR , 1);
	
	#endif
	/* End ( if ) condition for Macros */

	
/** disable EXT1 in initialization function  **/
/** like : void EXT1_voidDisable(); 		  */
	CLEAR_BIT( GICR , 7 );
	SET_BIT(GIFR , 7 ) ;
	
	
}


/****************************************************************/
/* Description    : This function used to Enable EXT1			*/ 
/*																*/
/*					Inputs : void					  			*/
/*					Return : void		 					    */
/****************************************************************/
/* Pre_condition  :  this function must be used after Interrupt */
/*     				 initialized 							    */
/****************************************************************/

void EXT1_voidEnable()
{
	
	SET_BIT( GICR , 7 );
	
}


/****************************************************************/
/* Description    : This function used to Disable EXT1			*/ 
/*																*/
/*					Inputs : void					  			*/
/*					Return : void		 					    */
/****************************************************************/
/* Pre_condition  :  this function must be used after Interrupt */
/*     				 initialized 							    */
/****************************************************************/

void EXT1_voidDisable()
{
	
	CLEAR_BIT( GICR , 7 );
	
}


/****************************************************************/
/* Description    : This function used to communicate with the	*/
/*					function in App Layer(The Callback function)*/ 
/*						[ Layer Architecture Problem Solved ]	*/
/*																*/
/*					Inputs : Pointer to function that points to	*/
/*							 the first line of the function(ISR)*/
/*					Return : void								*/
/****************************************************************/
/* Pre_condition  :  this function must be used after Interrupt */
/*     				 initialized 							    */
/****************************************************************/

void EXT1_voidCallBack(pf addresscpy)
{
	if(addresscpy != NULL)
	{
		y = addresscpy;
	}
}


/****************************************************************/
/* Description    : This function used to Set lach Interrupt	*/
/*									 happens.					*/ 
/*																*/
/*					Inputs : Sense Mode				  			*/
/*					Return : void		 					    */
/****************************************************************/
/* Pre_condition  :  this function must be used after Interrupt */
/*     				 initialized 							    */
/****************************************************************/
void EXT1_voidSetSignalch(u8 SenseCpy)
{
	SET_BIT(SREG,7);
	if (EXTI1_SENSE_MODE == IOC){
		SET_BIT(MCUCR , 0);
		CLEAR_BIT(MCUCR , 1);
	}
	
	else if (EXTI1_SENSE_MODE == RISING){
		SET_BIT(MCUCR , 0);
		SET_BIT(MCUCR , 1);
	}
	else if (EXTI1_SENSE_MODE == FALLING){
		CLEAR_BIT(MCUCR , 0);
		SET_BIT(MCUCR , 1);
	}
	
	else if (EXTI1_SENSE_MODE == LOW_LEVEL){
		CLEAR_BIT(MCUCR , 0);
		CLEAR_BIT(MCUCR , 1);
	}

	
	
}

/****************************************************************/
/* Description    : This function used to Check if interrupt is */
/*					Executed or Not.							*/ 
/*																*/
/*					Inputs : void					  			*/
/*					Return : flag Status [ LBTY_OK , LBTY_NOK ]	*/
/****************************************************************/
/* Pre_condition  :  this function must be used after Interrupt */
/*     				 initialized 							    */
/****************************************************************/
/*
flagStatus EXT0_enuIsExecuted( void )
{
	flagStatus ErrorStatus ;
	
	if( (GET_BIT(GIFR, 6)) == 1 )
	{
		
		ErrorStatus = LBTY_NOK ;
	}
	else if ( (GET_BIT(GIFR, 6)) == 0 )
	{
		
		ErrorStatus = LBTY_OK ;
	}
	
	return ErrorStatus ;
}
*/


void __vector_2(void) /*	ISR(INT1_vect)	*/
{
	y();
		
}

/***********************************************************************************************/
/************************************* END OF PROGRAM ******************************************/
/***********************************************************************************************/