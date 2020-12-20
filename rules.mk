PREFIX=arm-none-eabi-
CC=$(PREFIX)gcc
LD=$(PREFIX)ld
GDB=$(PREFIX)gdb
MARCH=cortex-m7

SRCS?=$(foreach DIR, $(SRC_DIR), $(shell find $(DIR) -name "*.c"))
OBJS:=$(addprefix $(BUILD_DIR)/, $(addsuffix .o, $(basename $(notdir $(SRCS)))))

LIB_TARGET:=$(LIB_DIR)/target/$(MODE)
INCLUDE_DIR+=$(addprefix $(LIB_DIR)/, $(addsuffix /include, $(LIBS)))

vpath %.h $(INCLUDE_DIR)
vpath %.c $(SRC_DIR)
vpath %.o $(TARGET_DIR)/build
vpath %.map $(TARGET_DIR)
vpath %.d $(DEP_DIR) $(LIB_TARGET)
vpath %.elf $(TARGET_DIR)
vpath %.a $(LIB_TARGET)

CFLAGS =  -mcpu=$(MARCH) -mthumb -std=gnu17 -g -Wall \
		  $(addprefix -I, $(INCLUDE_DIR)) -nostdlib -c 
LDFLAGS = -T ../../linker.ld -nostdlib -Map=$(TARGET_DIR)/main.map

DEP_FLAGS=-MT $@ -MMD -MP -MF $(DEP_DIR)/$*.d

DEP_FILES:= $(addprefix $(DEP_DIR)/, $(addsuffix .d, $(notdir $(basename $(SRCS)))))

.PHONY: clean test  all

all: $(PROJECT).elf

test:
	@echo ==========================================================================
	@echo project target dir: $(TARGET_DIR)
	@echo project dep dir: $(DEP_DIR)
	@echo project dep flags: $(DEP_FLAGS)
	@echo project depfiles: $(DEP_FILES)
	@echo project srcs: $(SRCS)
	@echo project build dir: $(BUILD_DIR)
	@echo dep creation: $(addsuffix .d, $(notdir $(basename $(SRCS))))
	@echo cflags: $(CFLAGS)
	@echo include directories: $(INCLUDE_DIR)
	@echo ==========================================================================



$(TARGET_DIR)/build/%.o: %.c $(DEP_DIR)/%.d \
	| $(BUILD_DIR) $(DEP_DIR)
	@echo generating %.o
	@$(CC) $(CFLAGS) $(DEP_FLAGS) -o $@ $<

$(PROJECT).elf: $(addsuffix .a, $(LIBS)) $(OBJS) | $(TARGET_DIR)
	@$(LD) $(LDFLAGS) -o $(TARGET_DIR)/$@ $^

$(DEP_FILES): |$(DEP_DIR)

include $(wildcard $(DEP_FILES))


$(TARGET_DIR):
	@mkdir -p $@/build

$(DEP_DIR):
	@mkdir -p $@

$(BUILD_DIR):
	@mkdir -p $@

clean:
	rm -rf $(TARGET_DIR)

clean_all:
	rm -rf $(TARGET_DIR) $(LIB_TARGET)

flash: $(PROJECT).elf $(GDB_CONFIG)
	$(GDB) -q -x $(GDB_CONFIG) $<
