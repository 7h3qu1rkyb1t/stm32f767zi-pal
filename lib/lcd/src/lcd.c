#include "lcd.h"


lcd_t lcd_init(GPIO_Type* PORT, uint8_t reg_sel, uint8_t read_write, uint8_t enable, uint8_t data_pins[4] ){
    lcd_t lcd = { PORT, reg_sel, read_write, enable};
    // copy input array into lcd_t struct
    memcpy(lcd.data_pins, data_pins, 4);

    // set control pins as output only
    lcd.port->MODER = (
            1 << (lcd.enable_pin *2 ) |
            1 << (lcd.read_write_pin * 2) |
            1 << (lcd.reg_sel_pin * 2) 
            );

    // init 4 bit mode
    _init_4bit(&lcd);
    // set cursor to home
    lcd_write_command(&lcd, set_cursor_home);
    // clear display
    lcd_write_command(&lcd, clear_display);
    return lcd;
}

void lcd_write_command(lcd_t* lcd, uint8_t command){
}
void lcd_write_data(lcd_t* lcd, uint8_t data){
}
void lcd_read_command(lcd_t* lcd){
}
void lcd_read_data(lcd_t* lcd){
}
void _lcd_setup(lcd_t* lcd){
}

uint16_t write_to_port(uint8_t* pin_arr, uint8_t data){
    uint16_t port_dat = (0b1 & data) << pin_arr[0];
    port_dat |= (0b10 & data )  << pin_arr[1];
    port_dat |= (0b100 & data)  << pin_arr[2];
    port_dat |= (0b1000 & data) << pin_arr[3];
    return port_dat;
}
