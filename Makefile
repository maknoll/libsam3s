NAME = $(shell basename `pwd`)
AS = arm-none-eabi-gcc
CC = arm-none-eabi-gcc
CXX = arm-none-eabi-g++
AR = arm-none-eabi-ar
CCFLAGS = -mcpu=cortex-m3 -mthumb -g
DEBUGGER = arm-none-eabi-gdbtui
OBJECTS = $(patsubst %.c, %.o, $(wildcard *.c)) \
			$(patsubst %.cpp, %.o, $(wildcard *.cpp)) \
			$(patsubst %.S, %.o, $(wildcard *.S))

all: $(NAME).a

$(NAME).a: $(OBJECTS)
	$(AR) rcs $@ $^

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $^

%.o: %.cpp
	$(CXX) $(CCFLAGS) -c -o $@ $^

%.o: %.S
	$(AS) $(CCFLAGS) -c -o $@ $^

clean:
	rm $(OBJECTS) $(NAME).a
