# update this
LIB:=
INCLUDE_DIR+=include
SRC_DIR=src

# no need to update this
LIB_DIR?=..
MODE?=debug
# need to find recursively if there are any multiple directories are there
SRC_DIRS:=$(shell find $(SRC) -type d -print | tr '\012' ' ' | sed 's/:$$//')
SRCS:=$(foreach DIR, $(SRC_DIRS), $(shell find $(DIR) -name "*.c"))
OBJS:=$(addsuffix .o, $(basename $(notdir $(SRCS))))

include $(LIB_DIR)/rules.mk
