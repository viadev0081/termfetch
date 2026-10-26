# Binary file name
BINARY = ~/termfetch/bin/termfetch

CC = clang

# source code file
SRCS = $(wildcard src/*.c) $(wildcard src/lib/terminals/*.c)
CFLAGS = -Wall -Wextra -Isrc/lib

OBJS = $(SRCS:.c=.o)

$(BINARY): $(OBJS)
	$(CC) $(OBJS) -o $(BINARY)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Очистка бинарей... "
	@rm -f $(BINARY)
	@rm -f $(OBJS)

install:
	sudo cp $(BINARY) /usr/bin/

uninstall:
	sudo rm -f /usr/bin/termfetch

run:
	$(BINARY)
