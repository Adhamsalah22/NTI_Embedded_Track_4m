/************************************************************/
/* 	Author 	 	 : Adham Salah Abdelaziz                    */
/* 	Date   		 : 25 Feb 2023                              */
/* 	Version 	 : 1V 									    */
/* 	Description	 : prog.c for EXT2		                    */
/************************************************************/


/****************************************************************/
/*********************** STD LIB DIRECTIVES *********************/
/****************************************************************/

#include "../LIB/std_types.h"
#include "../LIB/bit_math.h"

/****************************************************************/
/*********************** Component DIRECTIVES *******************/
/****************************************************************/

#include "EXTI2_int.h"
#include "EXTI2_config.h"
#include "EXTI2_private.h" 


/***********************************************************/
/**!comment   :  pointer to function for callback	       */
/***********************************************************/



/****************************************************************/
/*********************** Function Implementation  ***************/
/****************************************************************/
#define NULL (void*) 0

/****************************************************************/
/* Description    :  This function used to initialize EXT0      */
/*					 Inputs : void 								*/
/*					 return : void		 						*/
/****************************************************************/



void EXT2_voidInit (void)
{
	SET_BIT(SREG,7);
	/*  ( if / else if ) condition for Macros */

	#if EXTI0_SENSE_MODE == RISING
	SET_BIT(MCUCSR , 6);
	
	#elif EXTI0_SENSE_MODE == FALLING
	CLEAR_BIT(MCUCSR , 6);
	
	
	
	#endif
	/* End ( if ) condition for Macros */

	
/** disable EXT2 in initialization function  **/
/** like : void EXT2_voidDisable(); 		  */
	CLEAR_BIT( GICR , 5 );
	SET_BIT(GIFR , 5 ) ;
	
	
}


/****************************************************************/
/* Description    : This function used to Enable EXT2			*/ 
/*																*/
/*					Inputs : void					  			*/
/*					Return : void		 					    */
/****************************************************************/
/* Pre_condition  :  this function must be used after Interrupt */
/*     				 initialized 							    */
/****************************************************************/

void EXT2_voidEnable()
{
	
	SET_BIT( GICR , 5 );
	
}


/****************************************************************/
/* Description    : This function used to Disable EXT2			*/ 
/*																*/
/*					Inputs : void					  			*/
/*					Return : void		 					    */
/****************************************************************/
/* Pre_condition  :  this function must be used after Interrupt */
/*     				 initialized 							    */
/****************************************************************/

void EXT2_voidDisable()
{
	
	CLEAR_BIT( GICR , 5 );
	
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

void EXT2_voidCallBack(pf addresscpy)
{
	if(addresscpy != NULL)
	{
		z = addresscpy;
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
void EXT2_voidSetSignalch(u8 SenseCpy)
{
	SET_BIT(SREG,7);

	if (EXTI2_SENSE_MODE == RISING){
		SET_BIT(MCUCSR , 6);
	}	
	else if (EXTI2_SENSE_MODE == FALLING){
		CLEAR_BIT(MCUCSR , 6);
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
flagStatus EXT2_enuIsExecuted( void )
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


void __vector_3(void) /*	ISR(INT2_vect)	*/
{
	z();
		
}

/***********************************************************************************************/
/************************************* END OF PROGRAM ******************************************/
/***********************************************************************************************/