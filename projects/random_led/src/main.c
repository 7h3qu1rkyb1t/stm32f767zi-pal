#include "rcc.h"
#include "rng.h"
#include "gpio.h"
#include "stdint.h"

extern void call(void);
int main(){
    RCC->AHB1ENR_b.GPIOBEN = SET;
    GPIOB->MODER= (SET | SET << 14 | SET << 28);        // set all led pins as output

    // set up pll for rng
    RCC->PLLCFGR_b.PLLM4 = SET;         // PLLM = 16; vco = 16 MHz
    RCC->PLLCFGR_b.PLLN6 = SET;         // PLLN = 64; vco = 64 MHz
    RCC->PLLCFGR_b.PLLQ1 = SET;         // PLLQ = 2 ; RNG_freq = 32MHz
    RCC->CR_b.PLLON = SET;
    int a = 10;
    a++;
    // wait till pll is ready
    while(!RCC->CR_b.PLLRDY);

    // enable random number generator
    RCC->AHB2ENR_b.RNGEN = SET;
    RNG->CR_b.RNGEN = SET;

    // enable systick
    call();
}

void SysTick_handler(void){
    __asm__("bkpt");
}
