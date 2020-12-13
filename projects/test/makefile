PROJECT:=$(shell basename $(CURDIR))
MODE:=$(if $(filter no,$(DEBUG)),release,debug)

PROJECT_SRCS=main.c

PROJECT_TARGET=$(CURDIR)/target/$(MODE)
PROJECT_INCLUDE_DIR=$(CURDIR)/include
PROJECT_SRC_DIR=$(CURDIR)/src
LIB_DIR=$(CURDIR)/../../lib
PROJECT_DEP_DIR=$(PROJECT_TARGET)/dep


include $(LIB_DIR)/makefile
include ../../rules.mk
