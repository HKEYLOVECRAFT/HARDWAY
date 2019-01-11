SRCS = $(wildcard *.c)

PROGS = $(patsubst %.c,%,$(SRCS))

all: $(PROGS)

%: %.c
		$(CC) $(CFLAGS) -g -o $@ $<
clean: 
		rm -f $(PROGS)