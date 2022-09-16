cflags = -Wall -g
objs = ./build/main.o\
			 ./build/terminal.o\
			 ./build/interpreter.o\

run: compiler
	./build/main

compiler: ${objs}
	gcc ${cflags} -o ./build/main ${objs}

./build/main.o: ./src/main.c
	gcc ${cflags} -c ./src/main.c -o ./build/main.o
./build/interpreter.o: ./src/components/interpreter.c
	gcc ${cflags} -c ./src/components/interpreter.c -o ./build/interpreter.o
./build/terminal.o: ./src/components/terminal.c
	gcc ${cflags} -c ./src/components/terminal.c -o ./build/terminal.o

clean:
	rm ./build/*.o && rm ./build/main.exe
