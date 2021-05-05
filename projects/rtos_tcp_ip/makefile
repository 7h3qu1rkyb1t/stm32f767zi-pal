PROJECT:=$(shell basename $(CURDIR))
# PROJECT_SRCS=main.c

# no need to change
MODE:=$(if $(filter no,$(DEBUG)),release,debug)
DEP_DIR=$(TARGET_DIR)/dep
BUILD_DIR=$(TARGET_DIR)/build
GDB_CONFIG=openocd.gdb

# needs to be edited
TARGET_DIR:=$(CURDIR)/target/$(MODE)
INCLUDE_DIR:=$(CURDIR)/include
SRC_DIR:=$(CURDIR)/src
LIB_DIR:=$(CURDIR)/../../lib
LIBS=pal

FREERTOS_DIR:=$(XDG_LIB_DIR)/FreeRTOS-LTS/FreeRTOS/FreeRTOS-Kernel
INCLUDE_DIR+=$(FREERTOS_DIR)/include
SRCS+=tasks.c queue.c list.c port.c heap_4.c timers.c

vpath %.c $(FREERTOS_DIR)
vpath %.c $(FREERTOS_DIR)/portable/GCC/ARM_CM7/r0p1
vpath %.c $(FREERTOS_DIR)/portable/MemMang
vpath %.h $(FREERTOS_DIR)/include
vpath %.h $(FREERTOS_DIR)/portable/GCC/ARM_CM7/r0p1

INCLUDE_DIR+=$(FREERTOS_DIR)/include $(FREERTOS_DIR)/portable/GCC/ARM_CM7/r0p1

# ---------------- uC-TCP-IP ------------------------------------------------
uC_TCPIP_DIR := $(XDG_LIB_DIR)/uC-TCP-IP
INCLUDE_DIR += $(CURDIR)/include/bsp
INCLUDE_DIR += $(CURDIR)/include/cfg
INCLUDE_DIR += $(uC_TCPIP_DIR)
SRC_DIR		+= $(uC_TCPIP_DIR)/IF/
SRC_DIR		+= $(uC_TCPIP_DIR)/Source/
SRC_DIR		+= $(uC_TCPIP_DIR)/IP/IPv4/

vpath 		%.h 		$(uC_TCPIP_DIR)/Source

# -------------------uC-LIB------------------------------------------------
uC_LIB_DIR := $(XDG_LIB_DIR)/uC-LIB
INCLUDE_DIR += $(uC_LIB_DIR)
SRC_DIR 	+= $(uC_LIB_DIR)
SRC_DIR 	+= $(uC_LIB_DIR)/Ports/ARM-Cortex-M4/GNU/

vpath 		%.h			$(uC_LIB_DIR)

# -------------------uC-CPU-------------------------------------------------
uC_CPU_DIR := $(XDG_LIB_DIR)/uC-CPU
INCLUDE_DIR += $(uC_CPU_DIR)
SRC_DIR 	+= $(uC_CPU_DIR)

vpath 		%.h			$(uC_CPU_DIR)

# -------------------uC-Common-------------------------------------------------
uC_Common_DIR := $(XDG_LIB_DIR)/uC-Common
INCLUDE_DIR += $(uC_Common_DIR)
SRC_DIR 	+= $(uC_Common_DIR)/KAL/None

vpath 		%.h			$(uC_Common_DIR)


include ../../rules.mk
