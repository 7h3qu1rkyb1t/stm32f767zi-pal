#include "main.h"

int main(){
    // enable port b
    RCC->AHB1ENR_b.GPIOBEN = SET;

    // configure scl and sda pins as alternate output

    // initialize i2c1

    // write some test data

}
