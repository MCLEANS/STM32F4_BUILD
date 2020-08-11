#include "stm32f4xx.h"

int main(void) {

  RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
  GPIOA->MODER |= GPIO_MODER_MODER7_0;

  while(1){
    for(volatile int i = 0; i < 1000000; i++){}
    GPIOA->ODR ^= (1<<7);

  }
}
