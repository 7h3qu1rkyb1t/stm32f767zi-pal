#include "main.h"

uint8_t buffer[] = { 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55};
int main(){
    init_gpio();

    // set i2c
    init_spi();
    init_dma();
    // send
    send();
}

// initializes gpio and rcc
void init_gpio(void){
    // set rcc
    RCC->APB2ENR_b.SPI5ENR = SET;
    RCC->AHB1ENR_b.GPIOFEN = SET;
    RCC->AHB1ENR_b.DMA2EN = SET;

    // enable gpio port and pins
    GPIOF->MODER_b.MODER6 = 0b10;
    GPIOF->MODER_b.MODER7 = 0b10;
    GPIOF->MODER_b.MODER8 = 0b10;
    GPIOF->MODER_b.MODER9 = 0b10;
    // alternate function
    GPIOF->AFRL_b.AFRL6 = 0b0101;
    GPIOF->AFRL_b.AFRL7 = 0b0101;
    GPIOF->AFRH_b.AFRH8 = 0b0101;
    GPIOF->AFRH_b.AFRH9 = 0b0101;
    // speed 
    GPIOF->GPIOB_OSPEEDR_b.OSPEEDR6 = 0b01;
    GPIOF->GPIOB_OSPEEDR_b.OSPEEDR7 = 0b01;
    GPIOF->GPIOB_OSPEEDR_b.OSPEEDR8 = 0b01;
    GPIOF->GPIOB_OSPEEDR_b.OSPEEDR9 = 0b01;

    RCC->AHB1ENR_b.GPIOBEN = SET; // for debugging;
    GPIOB->MODER_b.MODER7 = 0b01;
    GPIOB->MODER_b.MODER14 = 0b01;
    NVIC->ISER2_b.SETENA |= (1<<21);
}

// sets up i2c
void init_spi(void){
    SPI5->CR1_b.MSTR = SET;
    SPI5->CR2_b.SSOE = SET;
    SPI5->CR2_b.DS   = 0b0111;              // 8bit 
    SPI5->CR2_b.ERRIE = SET;                // enable interrupt on error
    SPI5->CR2_b.TXDMAEN = SET;
}

void init_dma(void){
    DMA2->S3CR_b.CHSEL = 2;
    DMA2->S3CR_b.PL = 0b11;

    DMA2->S4CR_b.CHSEL = 2;
    DMA2->S4CR_b.PL = 0b11;
    DMA2->S4CR_b.MINC = SET;
    DMA2->S4CR_b.DIR = 0b01;
    DMA2->S4NDTR = sizeof(buffer);
    uint32_t* periph = (uint32_t*)&SPI5->DR;
    DMA2->S4PAR = (uint32_t)periph;
    DMA2->S4M0AR = (uint32_t)&buffer;
    DMA2->S4CR_b.EN = SET;

    // enable dma intr in nvic
    NVIC->ISER1_b.SETENA |= (1<<28);
    DMA2->S4CR_b.TCIE = SET;
}

void send(void){
    SPI5->CR1_b.SPE = SET;
    delay(100000);
    SPI5->CR1_b.SPE = RESET;
}

void SPI5_handler(void){
    if (SPI5->SR & SPI1_SR_MODF_Msk ){
        for(;;){
            GPIOB->BSRR_b.BS7 = SET;
            delay(1000000u);
            GPIOB->BSRR_b.BR7 = SET;
            delay(1000000u);
        }
    }
}

// blink led notifying that dma transfer complete
void info(void){
    GPIOB->BSRR_b.BS14 = SET;
    delay(500000);
    GPIOB->BSRR_b.BR14 = SET;
}

void delay(uint32_t val){
    for (val; val>0; val--);
}

void DMA2_Stream4_handler(void){
    if (DMA2->HISR_b.TCIF4){
        DMA2->S4CR_b.EN = RESET;
        DMA2->S4NDTR = sizeof(buffer);
        // clear dma flag
        DMA2->HIFCR_b.CTCIF4 = SET;
        info();
        delay(500000);
        DMA2->S4CR_b.EN = SET;
    }
}
