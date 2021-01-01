PROJECT:=$(shell basename $(CURDIR))
# PROJECT_SRCS=main.c

# needs to be edited
MODE:=$(if $(filter no,$(DEBUG)),release,debug)
TARGET_DIR:=$(CURDIR)/target/$(MODE)
INCLUDE_DIR:=$(CURDIR)/include
SRC_DIR:=$(CURDIR)/src
LIB_DIR:=$(CURDIR)/../../lib
FREERTOS_DIR:=/home/gireesh/programs/FreeRTOSv202012.00/FreeRTOS/Source

INCLUDE_DIR+=$(FREERTOS_DIR)/include
SRCS=tasks.c queue.c list.c port.c heap_4.c timers.c

vpath %.c $(FREERTOS_DIR)
vpath %.c $(FREERTOS_DIR)/portable/GCC/ARM_CM7/r0p1
vpath %.c $(FREERTOS_DIR)/portable/MemMang
vpath %.h $(FREERTOS_DIR)/include
vpath %.h $(FREERTOS_DIR)/portable/GCC/ARM_CM7/r0p1

INCLUDE_DIR+=$(FREERTOS_DIR)/include $(FREERTOS_DIR)/portable/GCC/ARM_CM7/r0p1


LIBS=pal

# no need to change
DEP_DIR=$(TARGET_DIR)/dep
BUILD_DIR=$(TARGET_DIR)/build
GDB_CONFIG=openocd.gdb


include ../../rules.mk
