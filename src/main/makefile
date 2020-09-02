#preprocess
ifeq ($(PROJECT_SRC_PATH),)
	PROJECT_SRC_PATH = $(shell pwd)/..
endif

include $(PROJECT_SRC_PATH)/makefile.incl

DIR_LIB = /usr/local/lib
DIR_INC = /usr/local/include

.PHONEY : all clean rebuild install test

TARGET = libmwglobal.a
LIB_INCS = $(wildcard *.h)

all:$(TARGET)

$(TARGET):$(MAIN_OBJS)
	$(AR) $@ $^

%.o:%.cc
	$(CXX) $(CXXFLAGS) $(MACRO_DEF) $(INC_LOCAL) $(INC_LOG4CPLUS) -c $< -o $@

clean:
	$(CLEAN)

rebuild:
	$(REBUILD)

install:
	$(CP) $(TARGET) $(DIR_LIB)
	$(CP) $(LIB_INCS) $(DIR_INC)
