cflags = -Wall -g
objs = ./build/main.o\
			 ./build/input.o\

run: compiler
	./build/main

compiler: ${objs}
	gcc ${cflags} -o ./build/main ${objs}

./build/main.o: ./main.c
	gcc ${cflags} -c ./main.c -o ./build/main.o

./build/input.o: ./src/components/input.c
	gcc ${cflags} -c ./src/components/input.c -o ./build/input.o
	
clean:
	rm ./build/*.o && rm ./build/main.exe
