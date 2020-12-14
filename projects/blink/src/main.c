#include "main.h"

const int const_int = 10;
int uninitialized[55];
int arr[3]={1,2,3};

int main(){
    RCC->AHB1ENR_b.GPIOBEN = SET;
    GPIOB->MODER_b.MODER7 = 1;
    GPIOB->ODR_b.ODR7 = SET;
}
