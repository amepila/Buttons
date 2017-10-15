/*
 * Buttons.c
 *
 *  Created on: Oct 14, 2017
 *      Author: Andres Hernandez
 */

#include "Buttons.h"
#include "GPIO.h"


static void Button_clock(Button_PortType port){
	switch(port){
	case PORT_A:
		GPIO_clockGating(GPIO_A);
		break;
	case PORT_B:
		GPIO_clockGating(GPIO_B);
		break;
	case PORT_C:
		GPIO_clockGating(GPIO_C);
		break;
	case PORT_D:
		GPIO_clockGating(GPIO_D);
		break;
	case PORT_E:
		GPIO_clockGating(GPIO_E);
		break;
	default:
		break;
	}
}

static void Button_enable(Button_PortType port, BitsType bit){

	static GPIO_pinControlRegisterType pinControlRegisterPort = GPIO_MUX1|GPIO_PE|GPIO_PS|INTR_RISING_EDGE;

	switch(port){
	case PORT_A:
		GPIO_pinControlRegister(GPIO_A,bit,&pinControlRegisterPort);
		GPIO_dataDirectionPIN(GPIO_A,GPIO_INPUT,bit);
		break;
	case PORT_B:
		GPIO_pinControlRegister(GPIO_B,bit,&pinControlRegisterPort);
		GPIO_dataDirectionPIN(GPIO_B,GPIO_INPUT,bit);
		break;
	case PORT_C:
		GPIO_pinControlRegister(GPIO_C,bit,&pinControlRegisterPort);
		GPIO_dataDirectionPIN(GPIO_C,GPIO_INPUT,bit);
		break;
	case PORT_D:
		GPIO_pinControlRegister(GPIO_D,bit,&pinControlRegisterPort);
		GPIO_dataDirectionPIN(GPIO_D,GPIO_INPUT,bit);
		break;
	case PORT_E:
		GPIO_pinControlRegister(GPIO_E,bit,&pinControlRegisterPort);
		GPIO_dataDirectionPIN(GPIO_E,GPIO_INPUT,bit);
		break;
	default:
		break;
	}
}

void Button_init(const Button_ConfigType* Button_Config){
	Button_clock(Button_Config->Button_Port);
	Button_enable(Button_Config->Button_Port, Button_Config->Bit_Type);
}
