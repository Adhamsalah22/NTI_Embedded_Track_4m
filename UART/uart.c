/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  uart.c
 *        \brief  
 *
 *      \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "uart.h"
#include "uart_reg.h"
/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/******************************************************************************
* \Syntax          : void UART_Init(u16 baudRate)        
* \Description     : Describe this service                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : baudRate   UART baudrate                                                                     
* \Return value:   : None                                   
*******************************************************************************/
void UART_Init(u16 baudRate)
{


	/* Enable receiver and transmitter */
	SET_BIT(UART_UCSRB_REG,RXEN_BIT_NO);  /* Enable Receiver*/
	SET_BIT(UART_UCSRB_REG,TXEN_BIT_NO);  /* Enable Transmitter */
	/* Set frame format: 8data, 1stop bit, Even Parity */
	UART_UCSRC_REG |= (1 << URSEL_BIT_NO) | UART_8_BIT_DATA | UART_EVEN_PARITY;
	
	/* Set baud rate */
	UART_UBRRL_REG = (u8)baudRate;
	UART_UBRRH_REG = (u8)(baudRate>>8);
	
	SET_BIT(UART_UCSRB_REG,7); /*	Enable Rx Complete Interrupt	*/
	SET_BIT(UART_UCSRB_REG,6); /*	Enable Tx Complete Interrupt	*/
}

/******************************************************************************
* \Syntax          : void UART_TransmitChr(u8 data)      
* \Description     : Describe this service                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : data   data byte                                                                    
* \Return value:   : None                                   
*******************************************************************************/
void UART_TransmitChr(u8 data)
{
	while(!(UART_UCSRA_REG & (1<<UDRE_BIT_NO)));
	/* Put data into buffer*/
	UART_UDR_REG = data;
}

/******************************************************************************
* \Syntax          : u8 UART_ReceiveChr(void)       
* \Description     : Describe this service                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                                                                    
* \Return value:   : u8     received data byte                                   
*******************************************************************************/
u8 UART_ReceiveChr(void)
{

	while(CHECK_BIT(UART_UCSRA_REG, RXC_BIT_NO) == 0);

	return UART_UDR_REG;
}


void UART_TransmitStr(u8 *str)
{
	u8 j=0;
	
	while (str[j]!= '\0' )		/* Send string till null */
	{
		UART_TransmitChr(str[j]);
		j++;
	}
	j = 0 ;
}


u8 Byte_TX_Index;
u8 Byte_TX_Buffer[1000];  // Buffer Size

void UART_TransmitStrINT(u8 *str)
{
	u8 Index = 0; 
	if(Byte_TX_Index == 0)
	{
		while (str[Index]!= '\0' )		/* Send string till null */
		{
			UART_TransmitChr(str[Index]);
			Index++;
		}
		Byte_TX_Buffer[Index] = 0;
		UART_UDR_REG = Byte_TX_Buffer[0];
	}

}

u8 Byte_RX_Index;
u8 *Byte_RX_Buffer;
u8 REC_COMPLETE_FLAG;

void UART_RecieveStrINT(u8 *str)
{
	if(Byte_RX_Index == 0)
	{
		REC_COMPLETE_FLAG = 0;
		Byte_RX_Buffer[0] = UART_UDR_REG;
		Byte_RX_Buffer = str;
	}

}

void __vector_13(void) __attribute__(( signal , used ));	// USART, Rx Complete
void __vector_13(void)
{
	Byte_RX_Index++;
	Byte_RX_Buffer[Byte_RX_Index] = UART_UDR_REG;
	if(Byte_RX_Buffer[Byte_RX_Index] == 0)
	{
		Byte_RX_Index = 0;
		REC_COMPLETE_FLAG = 1;
	}


}


void __vector_15(void) __attribute__(( signal , used ));	// USART, Tx Complete
void __vector_15(void)
{
	Byte_TX_Index++;
	if(Byte_TX_Buffer[Byte_TX_Index] != 0)
	{
		UART_UDR_REG = Byte_TX_Buffer[Byte_TX_Index];
	}
	else
	{
		Byte_TX_Index = 0;
	}

}
/**********************************************************************************************************************
 *  END OF FILE: FileName.c
 *********************************************************************************************************************/
