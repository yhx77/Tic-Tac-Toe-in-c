all: obj/tic.o
	gcc obj/tic.o src/main.c -o game

tic.o: include/tic.h
	gcc -c src/tic.c

clean:
	rm -rf tic.o
