#include "main.h"

volatile unsigned long x = 0, y = 0;
void vTask1( void * pvParameters )
{
    for( ;; )
    {
        x++;
        vTaskDelay(500);
    }
}
void vTask2( void * pvParameters )
{
    for( ;; )
    {
        y++;
        vTaskDelay(500);
    }
}
int main(){
    xTaskCreate( vTask2, "Task 2", 1000, NULL, 6, NULL );

    xTaskCreate( vTask1, "Task 1", 1000, NULL, 6, NULL );

    vTaskStartScheduler();
    while(1);
}

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
/* GetIdleTaskMemory prototype (linked to static allocation support) */
void vApplicationGetIdleTaskMemory( StaticTask_t **ppxIdleTaskTCBBuffer, StackType_t **ppxIdleTaskStackBuffer, uint32_t *pulIdleTaskStackSize );

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

uint32_t SystemCoreClock = 16000000;

void vApplicationGetTimerTaskMemory (StaticTask_t **ppxTimerTaskTCBBuffer, StackType_t **ppxTimerTaskStackBuffer, uint32_t *pulTimerTaskStackSize) {
  *ppxTimerTaskTCBBuffer   = &Timer_TCB;
  *ppxTimerTaskStackBuffer = &Timer_Stack[0];
  *pulTimerTaskStackSize   = (uint32_t)configTIMER_TASK_STACK_DEPTH;
}

uint8_t ucHeap[ configTOTAL_HEAP_SIZE ];
