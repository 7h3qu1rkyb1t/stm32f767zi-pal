#include "main.h"


// toggles red led
void red_blink( void * pvParameters ) {
    GPIOB->MODER_b.MODER14 = 0b01;
    for( ;; ){
        // toggle red led pin
        GPIOB->ODR ^= GPIO_ODR_ODR14_Msk;
        vTaskDelay(350);
    }
}

// toggles green led
void green_blink( void * pvParameters ) {
    GPIOB->MODER_b.MODER0 = 0b01;
    for( ;; )
    {
        // toggle green led pin
        GPIOB->ODR ^= GPIO_ODR_ODR0_Msk;
        vTaskDelay(300);
    }
}

// toggles blue led
void blue_blink( void * pvParameters ) {
    GPIOB->MODER_b.MODER7 = 0b01;
    for( ;; ){
        // toggle blue led pin
        GPIOB->ODR ^= GPIO_ODR_ODR7_Msk;
        vTaskDelay(400);
    }
}

int main(){
    RCC->AHB1ENR_b.GPIOBEN = SET;
    // set all pins as output
    xTaskCreate( red_blink, "red", 100, NULL, 6, NULL );
    xTaskCreate( green_blink, "green", 100, NULL, 6, NULL );
    xTaskCreate( blue_blink, "blue", 100, NULL, 6, NULL );

    vTaskStartScheduler();
    while(1);
}
