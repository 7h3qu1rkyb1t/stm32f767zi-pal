PROJECT:=$(shell basename ${CURDIR})
MODE:=$(if $(filter no,$(DEBUG)),release,debug)

PROJECT_TARGET=${CURDIR}/target/${MODE}

INCLUDE_DIR=${CURDIR}/include
SRC_DIR=${CURDIR}/src

VAPTH=${CURDIR}/include
VPATH+= ${CURDIR}/src
VPATH+= ${CURDIR}/target/${MODE}/build
VPATH+= ${CURDIR}/target


include ../../rules.mk
	

