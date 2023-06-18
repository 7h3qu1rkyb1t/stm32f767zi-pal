#include <gpio.h>
#include <rcc.h>
#include <usart.h>

void setup_gpio(void) {
    // enable clock of gpioE port
    RCC->AHB1ENR_b.GPIOEEN = SET;

    // set pin 0,1 as alternate function registers
    GPIOE->MODER_b.MODER0 = 0b10;
    GPIOE->MODER_b.MODER1 = 0b10;

    // set the pin speed
    GPIOE->GPIO_OSPEEDR_b.OSPEEDR0 = 0b11;
    GPIOE->GPIO_OSPEEDR_b.OSPEEDR1 = 0b11;

    // set pin 0,1 for uart tx and rx mode
    GPIOE->AFRL_b.AFRL0 = 0b1000;
    GPIOE->AFRL_b.AFRL1 = 0b1000;
}

void setup_uart(void) {
    // enable clock for UART8
    RCC->APB1ENR_b.UART8ENR = SET;
    RCC->DKCFGR2_b.UART8SEL = 0b1;
    // use 8 bit width
    UART8->CR1_b.M0 = 0;
    UART8->CR1_b.M1 = 0;
    // set baudrate
    UART8->BRR = 1666;
    // set stopbits to 1
    UART8->CR2_b.STOP = 0;

    UART8->CR1_b.UE = SET;

    // initialize/enable UART
    UART8->CR1_b.TE = 1;
}

void uart_send(uint8_t *buf, uintmax_t size) {
    for (uintmax_t i = 0; i < size; i++) {
        // wait till previous bit is sent
        while (!UART8->ISR_b.TXE)
            ;
        UART8->TDR = buf[i];
    }
    // wait till completion of transmission
    // this is required if the device needs to enter any other state and data shouldn't be corrupted
    while (!UART8->ISR_b.TC)
        ;
}

#define SAY_HELLO "Hello\r\n"

int main(int argc, char *argv[]) {
    setup_uart();
    setup_gpio();
    while (1) {
        uart_send((uint8_t *)SAY_HELLO, sizeof(SAY_HELLO)-1);
        for (int i = 0; i < 1000000; i++)
            ;
    }
    return 0;
}
