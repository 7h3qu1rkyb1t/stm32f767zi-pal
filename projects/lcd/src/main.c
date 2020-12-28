#include "rcc.h"
#include "gpio.h"

extern void setup(void);
extern void run(void);

int main(){
    RCC->AHB1ENR_b.GPIOGEN = SET;
    // lowering clock speed for measurements
    GPIOG->MODER = (1 | 1<<18 | 1<<30 | 1<<2);
    setup();
    run();
}
