#include "FreeRTOS.h"

uint32_t SystemCoreClock = 16000000;
uint8_t ucHeap[ configTOTAL_HEAP_SIZE ];

void *memcpy(void *dest, const void *src, size_t n){
    for(int i=0; i<n; i++){
        *(uint8_t *)dest++=* (uint8_t*)src++;
    }
    return 0;
}

void *memset(void *s, int c, size_t n){
    for(int i=0; i<n; i++){
        *(uint8_t *)s++=(char)c;
    }
    return 0;
}

// These 2 functions are copied from stm32cubeide
static StaticTask_t xIdleTaskTCBBuffer;
static StackType_t xIdleStack[configMINIMAL_STACK_SIZE];
static StaticTask_t Timer_TCB;
static StackType_t  Timer_Stack[configTIMER_TASK_STACK_DEPTH];
  
void vApplicationGetIdleTaskMemory( StaticTask_t **ppxIdleTaskTCBBuffer, StackType_t **ppxIdleTaskStackBuffer, uint32_t *pulIdleTaskStackSize )
{
  *ppxIdleTaskTCBBuffer = &xIdleTaskTCBBuffer;
  *ppxIdleTaskStackBuffer = &xIdleStack[0];
  *pulIdleTaskStackSize = configMINIMAL_STACK_SIZE;
}


void vApplicationGetTimerTaskMemory (StaticTask_t **ppxTimerTaskTCBBuffer, StackType_t **ppxTimerTaskStackBuffer, uint32_t *pulTimerTaskStackSize) {
  *ppxTimerTaskTCBBuffer   = &Timer_TCB;
  *ppxTimerTaskStackBuffer = &Timer_Stack[0];
  *pulTimerTaskStackSize   = (uint32_t)configTIMER_TASK_STACK_DEPTH;
}

