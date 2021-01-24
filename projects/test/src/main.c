#include "main.h"

int main(){
    RCC->AHB1ENR_b.GPIOGEN = SET;
    uint8_t data_pins[] = { 10, 11, 12, 13};
    lcd_init_4(GPIOG, 0, 9, 15, data_pins);
}
