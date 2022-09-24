cflags = -Wall -g
objs = ./build/main.o\
			 ./build/terminal.o\
			 ./build/parser.o\
			 ./build/ui.o\

run: compiler
	./build/main

compiler: ${objs}
	gcc ${cflags} -o ./build/main ${objs}

./build/main.o: ./src/main.c
	gcc ${cflags} -c ./src/main.c -o ./build/main.o
	
./build/parser.o: ./src/components/parser.c
	gcc ${cflags} -c ./src/components/parser.c -o ./build/parser.o

./build/terminal.o: ./src/components/terminal.c
	gcc ${cflags} -c ./src/components/terminal.c -o ./build/terminal.o

./build/ui.o: ./src/components/ui.c
	gcc ${cflags} -c ./src/components/ui.c -o ./build/ui.o

clean:
	rm ./build/*.o && rm ./build/main.exe
