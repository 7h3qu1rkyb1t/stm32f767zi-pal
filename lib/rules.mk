TARGET=$(DIR)/target/$(MODE)
AR=arm-none-eabi-ar
CC=arm-none-eabi-gcc
MARCH?=cortex-m7
AR_FLAGS=rc $(TARGET)/$@
CFLAGS=-mcpu=$(MARCH) -mthumb -std=gnu17  -Wall -I $(INCLUDE_DIR)\
		   -nostdlib -g -c

vpath %.a $(TARGET)
vpath %.c $(SRC_DIR)


.PHONY: all 
all:$(LIB).a
test:
	@echo src_dir = $(SRC_DIR)
	@echo srcs = $(SRCS)
	@echo objs = $(OBJS)
	@echo lib target = $(TARGET)

%.a: $(OBJS) | $(TARGET)
	@echo $(AR) $<
	@$(AR) $(AR_FLAGS)  $^

%.o: %.c
	@echo $(CC) $<
	@$(CC) $(CFLAGS) -o $@ $<

$(TARGET):
	@mkdir -p $@
