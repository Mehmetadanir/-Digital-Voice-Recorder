  /*
  main.c

 Author: Mehmet Adanır
 ID: 171024076
  */
#include "stm32g0xx.h"
#include "time.h"
#include "stdio.h"
#include "Project3.h"


#define LEDDELAY 1600000U

int main(void) {

	BSP_System_init();
	//init_adc() ;
	//init_timer1();
	//init_I2C();

	Keypad_enable();


    return 0;
}
