
example: main.o source.o
	gcc main.o source.o -o example

main.o: main.c
	gcc -c main.c

source.o: source.c source.h
	gcc -c source.c

clean:
	@echo Cleaning up object files and executable...
	@echo Running: rm -f *.o 
	-rm -f *.o  
	@echo Clean done.
