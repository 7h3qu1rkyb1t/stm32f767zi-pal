CC = arm-none-eabi-gcc
MARCH = cortex-m7
CFLAGS = -c -mcpu=$(MARCH) -mthumb -std=gnu17 -O0 -Wall

