 /*
  project3.h

 Author: Mehmet Adanır
 ID: 171024076
  */
#ifndef PORJECT3_H_
#define PROJECT3_H_

#include "stm32g0xx.h"

/* Common API functions for nucleo */

void delay_ms(uint32_t);
void delay(volatile unsigned int);


void showID();
void _print(int , char * , int );
void BSP_UART_init(uint32_t);
void printChar(uint8_t);
void BSP_System_init();

void init_adc() ;
unsigned int ADC_start(void);
void init_timer1() ;
void EXTI4_15_IRQHandler ();
// LED related functions
void Keypad_enable();
void BSP_led_init();
void BSP_led_set();
void BSP_led_clear();
void BSP_led_toggle();

void setSSD(int x , int y);
void SwitchSSD(int x);

// Button related functions
void BSP_button_init();
int BSP_button_read();

void IDLE();
void ssd_clear();
void setRowsKeypad();
void clearRowsKeypad();
#endif

