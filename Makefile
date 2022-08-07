CFLAGS	= -Wall -Wswitch-enum -gdwarf-4 -g3

all:
	$(CC) src/*.c -o build/main.exe $(CFLAGS)

	./build/main.exe