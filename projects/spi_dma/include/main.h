#include "rcc.h"
#include "spi.h"
#include "gpio.h"
#include "dma.h"
#include "nvic.h"

// pins description
// PG6 = NSS
// PG7 = SCK
// PG8 = MISO
// PG9 = MOSI
//
// ------------DMA2----------
// stream 3 - channel 2 - SPI5 RX
// stream 4 - channel 2 - SPI5 TX
//
void info(void);

void init_gpio(void);

void init_spi(void);

void send(void);

void delay(uint32_t);

void init_dma(void);
