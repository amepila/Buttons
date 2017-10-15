
#include <stdio.h>
#include "MK64F12.h"
#include "GPIO.h"
#include "PIT.h"
#include "NVIC.h"
#include "Buttons.h"

const Button_ConfigType Button_Config[6] = {
		{PORT_C,BIT3},
		{PORT_C,BIT2},
		{PORT_A,BIT2},
		{PORT_B,BIT23},
		{PORT_A,BIT1},
		{PORT_B,BIT9}
};

int main(void) {

	EnableInterrupts;
	Button_init(&Button_Config[0]);
	Button_init(&Button_Config[1]);
	Button_init(&Button_Config[2]);
	Button_init(&Button_Config[3]);
	Button_init(&Button_Config[4]);
	Button_init(&Button_Config[5]);



    while(1) {


    }
    return 0 ;
}
