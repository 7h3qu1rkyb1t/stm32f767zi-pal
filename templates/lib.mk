# update this
LIB:=
INCLUDE_DIR+=include
SRC_DIR=src

# no need to update this
LIB_DIR?=..
BUILD_DIR=$(CURDIR)/.build
MODE?=debug
# need to find recursively if there are any multiple directories are there
SRC_DIRS:=$(shell find $(SRC_DIR) -type d -print | tr '\012' ' ' | sed 's/:$$//')
SRCS:=$(foreach DIR, $(SRC_DIRS), $(shell find $(DIR) -name "*.c"))
AS_FILES:=$(foreach DIR, $(SRC_DIRS), $(shell find $(DIR) -name "*.s"))
OBJS:=$(addsuffix .o, $(basename $(notdir $(SRCS))))
OBJS+=$(addsuffix .o, $(basename $(notdir $(AS_FILES))))

include $(LIB_DIR)/rules.mk
