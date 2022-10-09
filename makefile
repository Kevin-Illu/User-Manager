cflags = -Wall -g
objs = ./build/main.o\
			 ./build/parser.o\
			 ./build/ui.o\
			 ./build/database.o\

run: compiler
	./build/main

compiler: ${objs}
	gcc ${cflags} -o ./build/main ${objs}

./build/main.o: ./src/main.c
	gcc ${cflags} -c ./src/main.c -o ./build/main.o
	
./build/parser.o: ./src/components/parser.c
	gcc ${cflags} -c ./src/components/parser.c -o ./build/parser.o

./build/ui.o: ./src/components/ui.c
	gcc ${cflags} -c ./src/components/ui.c -o ./build/ui.o

./build/database.o: ./src/components/database.c
	gcc ${cflags} -c ./src/components/database.c -o ./build/database.o

clean:
	rm ./build/*.o && rm ./build/main.exe
