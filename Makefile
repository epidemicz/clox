CFLAGS	= -Wall -Wswitch-enum

all:
	$(CC) src/*.c -o build/main.exe $(CFLAGS)

	./build/main.exe