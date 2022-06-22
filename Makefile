CC = gcc
CFLAGS = -ggdb -Wall -ansi -pedantic -std=c99
SRCS := $(wildcard *.c)
PRGS := $(patsubst %.c,%,$(SRCS))

objects = $(PRGS)
all: $(objects)

$(objects): %: %.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	$(RM) $(PRGS)
