#---------
#
# CppUTest Examples Makefile
#
#----------

#Set this to @ to keep the makefile quiet
ifndef SILENCE
#	SILENCE = @
endif

#--- Inputs ----#
COMPONENT_NAME = MyersTriangle
CPPUTEST_HOME = cpputest-3.5

CPPUTEST_USE_EXTENSIONS = Y
CPP_PLATFORM = Gcc

#CPPUTEST_ADDITIONAL_CFLAGS = -std=c99 -Wno-error=return-type -Wno-return-type -Wno-error=unused-parameter -Wno-unused-parameter
CPPUTEST_ADDITIONAL_CPPFLAGS = -Wno-return-type -Wno-unused-parameter

# This line is overriding the default new macros.  This is helpful
# when using std library includes like <list> and other containers
# so that memory leak detection does not conflict with stl.
#CPPUTEST_MEMLEAK_DETECTOR_NEW_MACRO_FILE = -include MyersTriangle/ExamplesNewOverrides.h
SRC_DIRS = \
	MyersTriangle

TEST_SRC_DIRS = \
	Test

INCLUDE_DIRS =\
  .\
  MyersTriangle\
  $(CPPUTEST_HOME)/include\

include $(CPPUTEST_HOME)/build/MakefileWorker.mk


