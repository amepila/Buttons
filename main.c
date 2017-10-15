
#include <stdio.h>
#include "MK64F12.h"
#include "GPIO.h"
#include "PIT.h"
#include "NVIC.h"
#include "Buttons.h"

const Button_ConfigType Buttons_Config[6] = {
		{PORT_C,BIT3},
		{PORT_C,BIT2},
		{PORT_A,BIT2},
		{PORT_B,BIT23},
		{PORT_A,BIT1},
		{PORT_B,BIT9}
};

int main(void) {

	EnableInterrupts;
	Buttons_init(Buttons_Config);

    while(1) {


    }
    return 0 ;
}
