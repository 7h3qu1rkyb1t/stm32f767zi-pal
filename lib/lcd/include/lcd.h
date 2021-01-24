#pragma once
#include <stdint.h>
#include <gpio.h>
#include<string.h>



typedef enum{
    clear_display,
    set_cursor_home,
} command;


typedef struct {
    GPIO_Type* port;
    uint8_t reg_sel_pin;
    uint8_t read_write_pin;
    uint8_t enable_pin;
    uint8_t data_pins[4];
} lcd_t;


void lcd_write_command(lcd_t* lcd, uint8_t command);
void lcd_write_data(lcd_t* lcd, uint8_t data);
void lcd_read_command(lcd_t* lcd);
void lcd_read_data(lcd_t* lcd);
// initialize lcd_t in 4 pin mode
lcd_t lcd_init(GPIO_Type* PORT, uint8_t reg_sel, uint8_t read_write, uint8_t enable, uint8_t data_pins[4] );

void _init_4bit(lcd_t* lcd);

// converts 4 bit data in required pins place
uint16_t write_to_port(uint8_t* pin_arr, uint8_t data);
