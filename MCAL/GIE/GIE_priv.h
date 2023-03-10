/************************************************************/
/* 	Author 	 	 : Adham Salah Abdelaziz                    */
/* 	Date   		 : 25 Feb 2023                              */
/* 	Version 	 : 1V 									    */
/* 	Description	 : private.h for GIE_priv                   */
/************************************************************/


/****************************************************************/
/* Description   : Guard to protect this File from include more */
/*                 than one time .                              */
/****************************************************************/

#ifndef _GIE_PRIV_H
#define _GIE_PRIV_H


/****************************************************************/	
/** !comment : From Data Sheet :  Memory mapped of SREG	   		*/
/**			   Register	is  0X5F						   		*/
/****************************************************************/

#define SREG		* ( ( volatile u8 * ) ( 0X5F ) )



#endif	/**!comment : End of the guard [_GIE_PRIV_H]		   **/
