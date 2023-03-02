/****************************************************************/
/* 	 Author 	   	    :    Adham Salah Abdelaziz              */
/*	 Date 				:    25 Feb 2023 						*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:    Configure Sense Mode [config.h] 	*/
/****************************************************************/



/****************************************************************/
/* Description   : Guard to protect this File from include more */
/*                 than one time .                              */
/****************************************************************/
#ifndef _ADC_CONFIG_H
#define _ADC_CONFIG_H

#define NULL 0

/****************************************************************/
/** !comment : Please Enter the Voltage Reference				*/
/** 		   VOLTAGE_REFERENCE can be : 						*/
/*					    					AREF 				*/
/*						    				AVCC 				*/
/*							    			INTERNAL			*/
/****************************************************************/

#define VOLTAGE_REFERENCE			AVCC



/****************************************************************/
/** !comment : Please Enter the ADJUSTMENT						*/
/** 		   ADJUSTMENT can be : 								*/
/*					    					RIGHT_ADJUSTMENT	*/
/*							    			LEFT_ADJUSTMENT		*/
/****************************************************************/
/****************************************************************/
/** NOTE	 : The preferred adjustment for a 8 bits Resolution	*/
/*				is LEFT_ADJUSTMENT and for a 10 bits Resolution	*/
/*				is RIGHT_ADJUSTMENT								*/
/****************************************************************/

#define ADJUSTMENT				RIGHT_ADJUSTMENT


/****************************************************************/
/** !comment : Please Enter the ADC channel      				*/
/** 		   ADC channel  can be : 		     				*/
/*					    					DIO_U8_PIN_0    	*/
/*					    					DIO_U8_PIN_1    	*/
/*					    					DIO_U8_PIN_2    	*/
/*					    					DIO_U8_PIN_3    	*/
/*					    					DIO_U8_PIN_4    	*/
/*					    					DIO_U8_PIN_5    	*/
/*					    					DIO_U8_PIN_6    	*/
/*					    					DIO_U8_PIN_7    	*/
/****************************************************************/

#define ADC_CHANNEL_NUMBER		DIO_U8_PIN_1

/****************************************************************/
/** !comment : Please Enter the ADC mode        				*/
/** 		   ADC mode  can be : 			        			*/
/*					    		 FREE_RUNNING_MODE           	*/
/*					    		 ANALOG_COMPARATOR	            */
/*					    		 EXTERNAL_INTERRPUT_REQUEST_0	*/
/*					    		 TIMER_COUNTER_0_COMPARE_MATCH	*/
/*					    		 TIMER_COUNTER_0_OVERFLOW	    */
/*					    		 TIMER_COUNTER_COMPARE_MATCH_B	*/
/*					    		 TIMER_COUNTER_1_OVERFLOW	    */
/*					    		 TIMER_COUNTER_1_CAPTURE_EVENT	*/
/****************************************************************/

#define ADC_AUTO_TRIGGER_SOURCE		FREE_RUNNING_MODE

/****************************************************************/
/** !comment : Please Enter the ADC Prescaler 	     			*/
/** 		   ADC Prescaler  can be : 				    		*/
/*					    					DIVID_BY_2      	*/
/*					    					DIVID_BY_4      	*/
/*					    					DIVID_BY_8      	*/
/*					    					DIVID_BY_16     	*/
/*					    					DIVID_BY_32      	*/
/*					    					DIVID_BY_64    	    */
/*					    					DIVID_BY_128    	*/
/****************************************************************/

#define ADC_PRESCALLER				DIVID_BY_128




#endif	/**!comment : End of the guard [_ADC_CONFIG_H]		   **/