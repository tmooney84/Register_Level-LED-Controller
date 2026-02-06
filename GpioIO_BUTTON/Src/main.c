#include "gpio.h"

bool btn_state;

int main(void)
{
	/*Initialize LED*/
	led_init();

	/*Initialize Pushbutton*/
	button_init();

	while(1)
	{
		/* Get Push Button State */
		btn_state = get_btn_state();

		if(btn_state){
			led_on();
		}
		else{
			led_off();
		}
	}
}
