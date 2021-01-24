PREFIX=arm-none-eabi-
CC=$(PREFIX)gcc
AS=$(PREFIX)as
LD=$(PREFIX)ld
AR=$(PREFIX)ar
MARCH?=cortex-m7
AR_FLAGS=rc 

INCLUDE_DIR+=$(addprefix $(LIB_DIR)/, $(addsuffix /include, $(LIBS)))

CFLAGS=-mcpu=$(MARCH) -mthumb -std=gnu17  -Wall $(addprefix -I, $(INCLUDE_DIR))\
		   -specs=nano.specs -nostdlib -g -c -mfpu=fpv5-d16 -mfloat-abi=hard
AFLAGS= -mcpu=$(MARCH) -mthumb -g --warn -c

TARGET=$(LIB_DIR)/target/$(MODE)

DEP_FLAGS=-MT $@ -MMD -MP -MF $(BUILD_DIR)/$*.d
DEP_FILES:= $(addprefix $(BUILD_DIR)/, $(addsuffix .d, $(notdir $(basename $(SRCS)))))

vpath %.a $(TARGET)
vpath %.c $(SRC_DIRS)
vpath %.s $(SRC_DIRS)
vpath %.d $(BUILD_DIR)
vpath %.o $(BUILD_DIR)


.PHONY: all clean test

all:$(TARGET)/$(LIB).a
	@echo =========$(notdir $<)===============+
	@$(AR) t $<

test:
	@echo src_dir 		= $(SRC_DIRS)
	@echo srcs 			= $(SRCS)
	@echo objs 			= $(addprefix $(BUILD_DIR), $(OBJS)) 
	@echo build dir 	= $(BUILD_DIR)
	@echo lib target 	= $(TARGET)

$(TARGET)/%.a: $(addprefix $(BUILD_DIR)/, $(OBJS)) | $(TARGET)
	@echo $(AR) $^
	@$(AR) $(AR_FLAGS) $@ $^

$(BUILD_DIR)/%.o: %.c $(BUILD_DIR)/%.d  | $(BUILD_DIR)
	@echo $(CC) $@
	@$(CC) $(CFLAGS) $(DEP_FLAGS) -o $@ $<

$(BUILD_DIR)/%.o: %.s | $(BUILD_DIR)
	@echo $(AS) $@
	@$(AS) $(AFLAGS) -o $@ $<

clean:
	rm -rf $(TARGET)/$(LIB).a $(BUILD_DIR)
$(TARGET):
	@mkdir -p $@

$(BUILD_DIR):
	@mkdir -p $@


$(DEP_FILES): |$(BUILD_DIR)

include $(wildcard $(DEP_FILES))
