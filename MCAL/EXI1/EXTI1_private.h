/****************************************************************/
/*   Author             :    Adham Salah Abdelaziz			    */
/*	 Date 				:    25 Feb 2023 		 				*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:    contain the Memory mapped of		*/
/*							 [MCUCR,MCUCSR,GICR,GIFR] Registers */
/****************************************************************/


/****************************************************************/
/* Description   : Guard to protect this File from include more */
/*                 than one time .                              */
/****************************************************************/

#ifndef _EXTI1_PRIV_H
#define _EXTI1_PRIV_H


/****************************************************************/
/** !comment : From Data Sheet :  Memory mapped of MCUCR    	*/
/**			   Register	is  0X55						    	*/
/****************************************************************/
/**			   MCUCR : MCU Control Register contains control	*/
/** 		   bits for interrupt sense control and general 	*/
/**            MCU functions.							    	*/
/****************************************************************/

#define MCUCR		*((volatile u8 * ) (0X55))
#define SREG		*((volatile u8 * ) (0X5F))

/****************************************************************/
/** !comment : From Data Sheet :  Memory mapped of MCUCSR   	*/
/**			   Register	is  0X54.								*/
/****************************************************************/
/**			   MCUCSR : MCU Control and Status Register			*/
/****************************************************************/

#define MCUCSR      *((volatile u8 * ) (0X54))

/****************************************************************/
/** !comment : From Data Sheet :  Memory mapped of GICR     	*/
/**			   Register	is  0X5B.								*/
/****************************************************************/
/**			   GICR : General Interrupt Control Register		*/
/****************************************************************/

#define GICR        *((volatile u8 * ) (0X5B))


/****************************************************************/
/** !comment : From Data Sheet :  Memory mapped of GIFR     	*/
/**			   Register	is  0X5A.						    	*/
/****************************************************************/
/**			   GIFR : General Interrupt Flag Register			*/
/****************************************************************/

#define GIFR        *((volatile u8 * ) (0X5A))

/** Linker Problem solved */
void __vector_2(void) __attribute__(( signal , used ));


#endif	/**!comment : End of the guard [_EXT1_PRIV_H]		   **/