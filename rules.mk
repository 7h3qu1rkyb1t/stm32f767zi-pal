PREFIX=arm-none-eabi-
CC=$(PREFIX)gcc
LD=$(PREFIX)ld
MARCH=cortex-m7

# PROJECT_SRCS:=$(foreach DIR, $(PROJECT_SRC_DIR), $(shell find $(DIR) -name "*.c"))
PROJECT_OBJS:=$(addprefix $(PROJECT_TARGET)/build/, $(addsuffix .o, $(basename $(notdir $(PROJECT_SRCS)))))

vpath %.h $(LIB_INCLUDE_DIR) $(PROJECT_INCLUDE_DIR)
vpath %.c $(LIB_SRC_DIR) $(PROJECT_SRC_DIR)
vpath %.o $(LIB_TARGET) $(PROJECT_TARGET)/build
vpath %.map $(PROJECT_TARGET)
vpath %.d $(PROJECT_DEP_DIR) $(LIB_TARGET)
vpath %.elf $(PROJECT_TARGET)


CFLAGS =  -mcpu=$(MARCH) -mthumb -std=gnu17  -Wall -I $(LIB_INCLUDE_DIR)\
		  -I $(PROJECT_INCLUDE_DIR) -nostdlib -c
LDFLAGS = -T ../../linker.ld -nostdlib -Map=$(PROJECT_TARGET)/main.map

PROJECT_DEP_FLAGS=-MT $@ -MMD -MP -MF $(PROJECT_DEP_DIR)/$*.d


.PHONY: clean test

all: $(PROJECT).elf

test:
	@echo $(LIB_SRC_DIR)

$(PROJECT_TARGET)/build/%.o: %.c $(PROJECT_DEP_DIR)/%.d\
		| $(PROJECT_TARGET) $(PROJECT_DEP_DIR)
	$(CC) $(CFLAGS) $(PROJECT_DEP_FLAGS) -o $@ $<

$(PROJECT).elf: $(LIB_OBJS) $(PROJECT_OBJS) | $(LIB_TARGET) $(PROJECT_TARGET)
	$(LD) $(LDFLAGS) -o $(PROJECT_TARGET)/$@ $^

PROJECT_DEPFILES := $(PROJECT_SRCS:%.c=$(PROJECT_DEP_DIR)/%.d)
$(PROJECT_DEPFILES):

include $(wildcard $(PROJECT_DEPFILES))


$(LIB_TARGET):
	@mkdir -p $@

$(PROJECT_TARGET):
	@mkdir -p $@/build

$(PROJECT_DEP_DIR):
	@mkdir -p $@

$(LIB_DEP_DIR):
	@mkdir -p $@

clean:
	rm -rf $(PROJECT_TARGET)

clean_all:
	rm -rf $(PROJECT_TARGET) $(LIB_TARGET)
