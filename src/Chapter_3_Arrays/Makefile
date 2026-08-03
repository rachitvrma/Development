CC = gcc
CFLAGS = -Wall -Wextra -g

# All "answer" files are standalone programs that share array_utils.c
SRCS = $(wildcard ans*.c test*.c)
BINS = $(SRCS:.c=)

COMMON = array_utils.c

all: $(BINS)

# Each binary is built from its own .c file + the shared common file
%: %.c $(COMMON) array_utils.h
	$(CC) $(CFLAGS) -o $@ $< $(COMMON)

clean:
	rm -f $(BINS)

.PHONY: all clean
