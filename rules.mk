CC = arm-none-eabi-gcc
LD=arm-none-eabi-ld
MARCH = cortex-m7

INCLUDE_DIR+=${CURDIR}/../../lib/include
SRC_DIR+=${CURDIR}/../../lib/src

# vpath %.h ${CURDIR}/lib/include

LIB_TARGET=${CURDIR}/target/${MODE}

CFLAGS =  -mcpu=$(MARCH) -mthumb -std=gnu17  -Wall -B include 
CFLAGS =  -mcpu=$(MARCH) -mthumb -std=gnu17  -Wall -I $(INCLUDE_DIR) -nostdlib
LDFLAGS = -T ../../linker.ld -nostdlib -Map=${PROJECT_TARGET}/main.map

VPATH+= ${SRC_DIR}
VPATH+= ${SRC_DIR}

all: ${PROJECT}.elf

%.o:%.c %.h
	$(CC) $(CFLAGS) -o $(PROJECT_TARGET)/build/$@ $<

${LIB_TARGET}/${MODE}/%.o: %.c
	$(CC) $(CFLAGS) -o $@ $<

$(PROJECT).elf: main.o
	@echo ======================
	@echo ${VPATH}
	@echo ======================
	$(LD) $(LDFLAGS) -o $(PROJECT_TARGET)/$@ $^

