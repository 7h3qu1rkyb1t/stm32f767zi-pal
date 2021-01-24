#pragma once

// spi instruction for nrf24l01

// read RX PAYLOAD
#define     R_RX_PAYLOAD        0b01100001
// write TX PAYLOAD
#define     W_TX_PAYLOAD        0b10100000
// FLUSH TX FIFO
#define     FLUSH_TX            0b11100001
// FLUSH RX FIFO
#define     FLUSH_RX            0b11100010
// REUSE last sent payload
#define     REUSE_TX_PL         0b11100011
// no operation
#define     NOP                 0b11111111
