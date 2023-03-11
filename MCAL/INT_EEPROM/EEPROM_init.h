/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  <Write File Name>
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef EEPROM_INIT_H
#define EEPROM_INIT_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
 #include "EEPROM_register.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void EEPROM_write(u16 uiAddress, u8 ucData);
u8 EEPROM_read(u16 uiAddress);
 
#endif  /* EEPROM_INIT_H */

/**********************************************************************************************************************
 *  END OF FILE: EEPROM_INIT.h
 *********************************************************************************************************************/