#include "gpio.h"
#include "systick.h"

bool btn_state;

int main(void)
{
	/*Initialize LED*/
	led_init();

	/*Initialize Pushbutton*/
	button_init();

//	while(1)
//	{
//		/* Get Push Button State */
//		btn_state = get_btn_state();
//
//		if(btn_state){
//			led_on();
//		}
//		else{
//			led_off();
//		}
//	}

	while(1){
		/*Delay for 500ms*/
		systick_msec_delay(1000);
		/*Toggle the LED*/
		led_toggle();
	}
}
