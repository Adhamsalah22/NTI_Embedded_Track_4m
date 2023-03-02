/************************************************************/
/* 	Author 	 	 : Adham Salah Abdelaziz                    */
/* 	Date   		 : 25 Feb 2023	                            */
/* 	Version 	 : 1V 									    */
/* 	Description	 : prog.c for ADC		                    */
/************************************************************/


/****************************************************************/
/*********************** STD LIB DIRECTIVES *********************/
/****************************************************************/

#include "../LIB/std_types.h"
#include "../LIB/bit_math.h"


/****************************************************************/
/*********************** Component DIRECTIVES *******************/
/****************************************************************/

#include "ADC_int.h"
#include "ADC_config.h"
#include "ADC_private.h"

/****************************************************************/
/*********************** Function Implementation  ***************/
/****************************************************************/


/****************************************************************/
/* Description    :  This function used to initialize ADC 	    */
/*					 Inputs : void 								*/
/*					 return : void		 						*/
/****************************************************************/

void ADC_voidInit (void)
{
	//Voltage Reference Selection
	#if VOLTAGE_REFERENCE == AVCC
	SET_BIT( ADMUX , 6 );
	CLEAR_BIT( ADMUX , 7 );
	
	#elif VOLTAGE_REFERENCE == AREF
	CLEAR_BIT( ADMUX , 6 );
	CLEAR_BIT( ADMUX , 7 );
	
	#elif VOLTAGE_REFERENCE == INTERNAL
	SET_BIT( ADMUX , 6 );
	SET_BIT( ADMUX , 7 ); 
	
	#endif
	
	#if ADJUSTMENT == RIGHT_ADJUSTMENT
	CLEAR_BIT( ADMUX , 5 );
	
	#elif ADJUSTMENT == LEFT_ADJUSTMENT
	SET_BIT( ADMUX , 5 );
	#endif
	
	
	#if ADC_CHANNEL_NUMBER == DIO_U8_PIN_0
	CLEAR_BIT( ADMUX , 0 );
	CLEAR_BIT( ADMUX , 1 );
	CLEAR_BIT( ADMUX , 2 );
	CLEAR_BIT( ADMUX , 3 );
	
	#elif ADC_CHANNEL_NUMBER == DIO_U8_PIN_1
	SET_BIT( ADMUX , 0 );
	CLEAR_BIT( ADMUX , 1 );
	CLEAR_BIT( ADMUX , 2 );
	CLEAR_BIT( ADMUX , 3 );
	
	#elif ADC_CHANNEL_NUMBER == DIO_U8_PIN_2
	CLEAR_BIT( ADMUX , 0 );
	SET_BIT( ADMUX , 1 );
	CLEAR_BIT( ADMUX , 2 );
	CLEAR_BIT( ADMUX , 3 );
	
	#elif ADC_CHANNEL_NUMBER == DIO_U8_PIN_3
	SET_BIT( ADMUX , 0 );
	SET_BIT( ADMUX , 1 );
	CLEAR_BIT( ADMUX , 2 );
	CLEAR_BIT( ADMUX , 3 );
	
	#elif ADC_CHANNEL_NUMBER == DIO_U8_PIN_4
	CLEAR_BIT( ADMUX , 0 );
	CLEAR_BIT( ADMUX , 1 );
	SET_BIT( ADMUX , 2 );
	CLEAR_BIT( ADMUX , 3 );
	
	#elif ADC_CHANNEL_NUMBER == DIO_U8_PIN_5
	SET_BIT( ADMUX , 0 );
	CLEAR_BIT( ADMUX , 1 );
	SET_BIT( ADMUX , 2 );
	CLEAR_BIT( ADMUX , 3 );
	
	#elif ADC_CHANNEL_NUMBER == DIO_U8_PIN_6
	CLEAR_BIT( ADMUX , 0 );
	SET_BIT( ADMUX , 1 );
	SET_BIT( ADMUX , 2 );
	CLEAR_BIT( ADMUX , 3 );
	
	#elif ADC_CHANNEL_NUMBER == DIO_U8_PIN_7
	SET_BIT( ADMUX , 0 );
	SET_BIT( ADMUX , 1 );
	SET_BIT( ADMUX , 2 );
	CLEAR_BIT( ADMUX , 3 );
	#endif


	#if ADC_PRESCALLER == DIVID_BY_2
	CLEAR_BIT( ADCSRA , 0 );
	CLEAR_BIT( ADCSRA , 1 );
	CLEAR_BIT( ADCSRA , 2 );


	#elif ADC_PRESCALLER == DIVID_BY_4
	CLEAR_BIT( ADCSRA , 0 );
	SET_BIT( ADCSRA , 1 );
	CLEAR_BIT( ADCSRA , 2 );
	

	#elif ADC_PRESCALLER == DIVID_BY_8
	SET_BIT( ADCSRA , 0 );
	SET_BIT( ADCSRA , 1 );
	CLEAR_BIT( ADCSRA , 2 );
	

	#elif ADC_PRESCALLER == DIVID_BY_16
	CLEAR_BIT( ADCSRA , 0 );
	CLEAR_BIT( ADCSRA , 1 );
	SET_BIT( ADCSRA , 2 );
	

	#elif ADC_PRESCALLER == DIVID_BY_32
	SET_BIT( ADCSRA , 0 );
	CLEAR_BIT( ADCSRA , 1 );
	SET_BIT( ADCSRA , 2 );
	

	#elif ADC_PRESCALLER == DIVID_BY_64
	CLEAR_BIT( ADCSRA , 0 );
	SET_BIT( ADCSRA , 1 );
	SET_BIT( ADCSRA , 2 );


	#elif ADC_PRESCALLER == DIVID_BY_128
	SET_BIT( ADCSRA , 0 );
	SET_BIT( ADCSRA , 1 );
	SET_BIT( ADCSRA , 2 );

	/* End ( if ) condition for Macros */
	#endif
}


/****************************************************************/
/* Description    : This function used to Enable ADC			*/
/*																*/
/*					Inputs : void					  			*/
/*					Return : void		 					    */
/****************************************************************/
/* Pre_condition  :  this function must be used after ADC		*/
/*     				 initialized 							    */
/****************************************************************/

void ADC_voidEnable()
{
	
	SET_BIT( ADCSRA , 7 );
	
}

/****************************************************************/
/* Description    : This function used to Enable ADC Interrput	*/
/*																*/
/*					Inputs : void					  			*/
/*					Return : void		 					    */
/****************************************************************/
/* Pre_condition  :  this function must be used after ADC		*/
/*     				 initialized 							    */
/****************************************************************/

void ADC_voidInterrputEnable()
{

	
	SET_BIT( ADCSRA , 3 );
	
}


/****************************************************************/
/* Description    : This function used to Disable ADC			*/
/*																*/
/*					Inputs : void					  			*/
/*					Return : void		 					    */
/****************************************************************/
/* Pre_condition  :  this function must be used after ADC 		*/
/*     				 initialized 							    */
/****************************************************************/

void ADC_voidDisable()
{
	
	CLEAR_BIT( ADCSRA , 7 );
	
}


/****************************************************************/
/* Description    : This function used to Start converting		*/
/*																*/
/*					Inputs : void					  			*/
/*					Return : void		 					    */
/****************************************************************/
/* Pre_condition  :  this function must be used after ADC 		*/
/*     				 initialized 							    */
/****************************************************************/

void ADC_voidStartConversion()
{
	
	SET_BIT( ADCSRA , 6 );
	
}


/****************************************************************/
/* Description    : This function used Read channels    		*/
/*																*/
/*					Inputs : void					  			*/
/*					Return : u16		 					    */
/****************************************************************/
/* Pre_condition  :  this function must be used after ADC 		*/
/*     				 initialized 							    */
/****************************************************************/


u16 read_adc_channels()
{
	// Configure ADC module to read the specified pins
	ADC_voidInit();

	// Start the conversion process
	ADC_voidStartConversion();

	// Wait for the conversion to complete
	while (!CHECK_BIT(ADCSRA,4));

	// Read the result from the ADC module's result register
	u16 result = ADC_u16ReadADCInMV();
	
	// Set Flag
	SET_BIT(ADCSRA,4);

	// Return the result
	return result;
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

void ADC_voidAutoTrigger()
{
	

	
	/****************************************************************/
	/** !comment : From Data Sheet : Starting conversion on positive*/
	/*			   edge when ADATE = 1						    	*/
	/****************************************************************/

	
	/** Enable ADC Auto Trigger	 							   **/
	/** ADATE = 1 =====> 	SET_BIT( ADATE , 5 ); 			   **/

	SET_BIT( ADCSRA , 5 );
	

	/*  ( if / else if ) condition for Macros */
	#if ADC_AUTO_TRIGGER_SOURCE == FREE_RUNNING_MODE
	CLEAR_BIT( SFIOR , 0 );
	CLEAR_BIT( SFIOR , 1 );
	CLEAR_BIT( SFIOR , 2 );
	
	#elif ADC_AUTO_TRIGGER_SOURCE == ANALOG_COMPARATOR
	SET_BIT( SFIOR , 0 );
	CLEAR_BIT( SFIOR , 1 );
	CLEAR_BIT( SFIOR , 2 );
	
	#elif ADC_AUTO_TRIGGER_SOURCE == EXTERNAL_INTERRPUT_REQUEST_0
	CLEAR_BIT( SFIOR , 0 );
	SET_BIT( SFIOR , 1 );
	CLEAR_BIT( SFIOR , 2 );
	
	
	#elif ADC_AUTO_TRIGGER_SOURCE == TIMER_COUNTER_0_COMPARE_MATCH
	SET_BIT( SFIOR , 0 );
	SET_BIT( SFIOR , 1 );
	CLEAR_BIT( SFIOR , 2 );

	#elif ADC_AUTO_TRIGGER_SOURCE == TIMER_COUNTER_0_OVERFLOW
	CLEAR_BIT( SFIOR , 0 );
	CLEAR_BIT( SFIOR , 1 );
	SET_BIT( SFIOR , 2 );
	
	#elif ADC_AUTO_TRIGGER_SOURCE == TIMER_COUNTER_COMPARE_MATCH_B
	SET_BIT( SFIOR , 0 );
	CLEAR_BIT( SFIOR , 1 );
	SET_BIT( SFIOR , 2 );

	#elif ADC_AUTO_TRIGGER_SOURCE == TIMER_COUNTER_1_OVERFLOW
	CLEAR_BIT( SFIOR , 0 );
	SET_BIT( SFIOR , 1 );
	SET_BIT( SFIOR , 2 );

	#elif ADC_AUTO_TRIGGER_SOURCE == TIMER_COUNTER_1_CAPTURE_EVENT
	SET_BIT( SFIOR , 0 );
	SET_BIT( SFIOR , 1 );
	SET_BIT( SFIOR , 2 );
	
	#endif
	/* End ( if ) condition for Macros */
	
}


/****************************************************************/
/* Description    : This function used to Read ADC and 			*/
/*																*/
/*					Inputs : void					  			*/
/*					Return : u16 Digital Converting melli Volt	*/
/****************************************************************/
/* Pre_condition  :  this function must be used after ADC 		*/
/*     				 initialized 							    */
/****************************************************************/

u16 ADC_u16ReadADCInMV()
{
	u16 Ain = 0,AinLow =0;
	ADC_voidStartConversion();
	while (CHECK_BIT(ADCSRA,4)==0);
	
		SET_BIT(ADCSRA,4);
	

// 	#if ADJUSTMENT == RIGHT_ADJUSTMENT
// 	 AinLow = (u16)ADCL;  /* Read lower byte*/
// 	
// 	#elif ADJUSTMENT == LEFT_ADJUSTMENT
// 	Ain = (u16)ADCH*256;  /* Read higher 2 bits and Multiply with weight */
// 	

// 	#endif

			
			 
	Ain = Ain + AinLow;				
					
	return(Ain);	
	
}
 pf y;
 void ADC_callback (pf k)
 {
	 if(k!=NULL)
	 {
		 y = k;
	 }
 }

void __vector_16(void)	__attribute__((signal,used));
void __vector_16(void)
{
// {u16 Ain = 0,AinLow =0;
// 	u8 String[5];
// 	AinLow = (u16)ADCL;		/* Read lower byte*/
// 	Ain = (u16)ADCH*256;		/* Read higher 2 bits and 
// 					Multiply with weight */
// 	Ain = Ain + AinLow;	
// 	 		lcd_vidGotoRowColumn(1,1);
// 	 		itoa(Ain,String,10);	/* Integer to string conversion */
// 	 		lcd_vidDisplyStr(String);
// 	 		lcd_vidDisplyStr(" ");
// 			ADC_voidStartConversion();
// 	 		//lcd_vidSendCmd(0x01);
 y();

}

/***********************************************************************************************/
/************************************* END OF PROGRAM ******************************************/
/***********************************************************************************************/