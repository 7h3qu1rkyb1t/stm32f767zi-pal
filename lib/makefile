LIB_INCLUDE_DIR=$(LIB_DIR)/include
LIB_SRC_DIR:= $(shell find $(LIB_DIR)/src -type d -print | tr '\012' ' ' | sed 's/:$$//')
LIB_TARGET=$(LIB_DIR)/target/$(MODE)

LIB_SRCS:=$(foreach DIR, $(LIB_SRC_DIR), $(shell find $(DIR) -name "*.c"))

LIB_OBJS:=$(addprefix $(LIB_TARGET)/, $(addsuffix .o, $(basename $(notdir $(LIB_SRCS)))))

LIB_CFLAGS =  -mcpu=$(MARCH) -mthumb -std=gnu17  -Wall -I $(LIB_INCLUDE_DIR)\
		   -nostdlib -c

$(LIB_TARGET)/%.o: %.c | $(LIB_TARGET)
	$(CC) $(LIB_CFLAGS) -o $@ $<
