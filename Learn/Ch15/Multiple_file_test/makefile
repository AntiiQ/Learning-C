
example: main.o source.o
	gcc main.o source.o -o example

main.o: main.c
	gcc -c main.c

source.o: source.c source.h
	gcc -c source.c

clean:
	del *.o example

