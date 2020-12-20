#include "rcc.h"
#include<stdint.h>
#include "gpio.h"

/* 
 * 4 RS     - PG0
 * 5 RW     - PG9
 * 6 OP En  - PG15
 * 7 DB0    - PG10
 * 8 DB1    - PG11
 * 9 DB2    - PG12
 * 10DB3    - PG13
 */

#define rs_pos   0
#define rw_pos      9
#define en_pos      15
#define data_pos    10

void delay(uint32_t);
uint8_t read_control(void);

// initializes lcd with pins
// RS, RW, EN, DB0, DB1, DB2, DB3
#define lcd_init(RS, RW, EN, DB0, DB1, DB2, DB3) ({\

#define write_command(command) ({\
        while(check_status());\
#ifndef lcd_4_bit\
        GPIOG->ODR = ( (command << data_pos) | GPIO_ODR_ODR15_Msk);\
        delay(550);\
        GPIOG->BSRR=0xffff0000;\
        delay(550);\
        })
#define write_data(data) ({\
        while(check_status());\
        GPIOG->ODR = ( GPIO_ODR_ODR0_Msk | (data << data_pos) | GPIO_ODR_ODR15_Msk);\
        delay(550);\
        GPIOG->BSRR=0xffff0000;\
        delay(550);\
        })

#define set_mode_read() (GPIOG->MODER &= ~( 1<<20 | 1<< 22 | 1<<26 | 1<<24))
#define set_mode_write() (GPIOG->MODER |= ( 1<<20 | 1<< 22 | 1<<26 | 1<<24))


#define check_status() (read_control() &0x7f)
        
