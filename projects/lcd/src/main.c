#include "main.h"

int main(){
    RCC->AHB1ENR_b.GPIOGEN = SET;
    // setting all pins connected to lcd as output
    GPIOG->MODER = (1 | 1<<18 | 1<<30 );
    set_mode_write();
    // no pull up/down needed
    // set 4 bit mode
	write_command(0b10);// write data

    // set 2 lines display
	write_command(0b10);// write data
	write_command(0b1000);// write data

    // clear display
    write_command(0);
    write_command(0b1);

    // return to home
    write_command(0);
    write_command(0b10);

    // set display on
    write_command(0);
	write_command(0xe);         // enables display, cursor, blinking

    // set entry mode
    write_command(0);
	write_command(0b110);         // enables display, cursor, blinking

    uint8_t var = 0x20;
    // write data 
    /* for( int c=0; c<60;c++){ */
    /*     write_data((var&0xf0) >> 4); */
    /*     write_data((var & 0xf)); */
    /*     var++; */
    /* } */
    /*  */
    /* delay(1000000); */
    /* write_command(0b1); */
    /* write_command(0b1000); */
    /* delay(1000000); */
    /* write_command(0b1); */
    /* write_command(0b1000); */
    /*  */

    /* write_data(0b1010); */
    /* write_data(0b1011 ); */

    /* write_data(0b0010); */
    /* write_data(0b000 ); */
    write_data(0b0011);
    write_data(0b0001);
    write_command(0b1);
    write_command(0b0100);
    write_command(0b1);
    write_command(0b0100);
    write_data(0b0011);
    write_data(0b0011);

    while(1){
        /* for (int j=0; j<0x80;j++){ */
        /*     write_data(0xf&j); */
        /*     write_data((0xf0&j) >> 4); */
        /*     delay(100000); */
        /* } */
    }
}

void delay(uint32_t time){
    for (int i=0; i<time; i++){
        __asm__("nop");
    }
}
uint8_t read_control(){
    GPIOG->ODR_b.ODR9 = SET; 
    set_mode_read();
    GPIOG->ODR_b.ODR15 = SET;
    delay(550);
    uint8_t val = GPIOG->IDR << 4;
    GPIOG->ODR_b.ODR15 = RESET;
    delay(550);
    GPIOG->ODR_b.ODR15 = SET;
    val |= (0xf & GPIOG->IDR);
    set_mode_write();
    return val;
}
