DIR?=..
MODE?=debug
LIB:=pal
INCLUDE_DIR+=$(DIR)/$(LIB)/include
# need to find recursively if there are any multiple directories are there
SRC_DIR:=$(shell find $(DIR)/$(LIB)/src -type d -print | tr '\012' ' ' | sed 's/:$$//')
SRCS:=$(foreach DIR, $(SRC_DIR), $(shell find $(DIR) -name "*.c"))
OBJS:=$(addsuffix .o, $(basename $(notdir $(SRCS))))

include $(DIR)/rules.mk
