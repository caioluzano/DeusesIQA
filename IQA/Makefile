CC = gcc
CFLAGS = `pkg-config --libs gtk+-3.0` `pkg-config --cflags gtk+-3.0`
OBJS = iqa

all:
	$(CC) iqa.c $(CFLAGS) -o iqa

clean:
	rm -rf $(OBJS)
