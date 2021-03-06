/*
 * GopherCAN_config.h
 *
 *  Created on: Jul 17, 2021
 *      Author: ian
 */

#ifndef INC_GOPHERCAN_CONFIG_H_
#define INC_GOPHERCAN_CONFIG_H_

// GopherCAN_config.h
//  TODO DOCS

#define F0XX 0
#define F4XX 4
#define F7XX 7

// Begin Configuration defines. These are to be modified by the module specific developer
#define AUTOGEN_EXTERNS

#define TARGET F4XX
//#define TARGET F7XX

// define the callback function for CAN isr
#define FIFO0_RX_CALLBACK custom_service_can_rx_hardware(hcan, CAN_RX_FIFO0);
#define FIFO1_RX_CALLBACK custom_service_can_rx_hardware(hcan, CAN_RX_FIFO1);

// RX and TX buffer sizes. These values should be chosen by the devs
#define RX_BUFFER_SIZE 32
#define TX_BUFFER_SIZE 64

// Note some initialization is different for multi-bus. Check GopherCAN_router_example.c for details
//#define MULTI_BUS

#ifdef MULTI_BUS
#define CAN_ROUTER

// up to 3 busses are supported. That is the most available in the STM32 series
#define NUM_OF_BUSSES 2
#endif

// End of GopherCAN_config.h
#endif /* INC_GOPHERCAN_CONFIG_H_ */
