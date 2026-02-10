#include "gpio.h"
#include "systick.h"

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
			led_toggle();
			systick_msec_delay(200);
		}

	}
}


//	while(1)
//	{
//		/* Get Push Button State */
//		btn_state = get_btn_state();
//
//		if(btn_state){
//			led_on();
//			systick_msec_delay(500);
//			while(1){
//				if(0 == get_btn_state()){
//					led_off();
//					break;
//				}
//			}
//		}
//		else{
//			led_off();
//			systick_msec_delay(500);
//				while(1){
//				if(1 == get_btn_state()){
//					led_on();
//					break;
//				}
//			}
//		}
//	}
