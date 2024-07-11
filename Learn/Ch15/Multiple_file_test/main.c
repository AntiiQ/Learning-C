/*The file that used those other files*/


// outside macros
//you can define macros when compiling 

//gcc -DDEBUG=1 main.c

// -D - note 

// same as #define DEBUG 1

#include "source.h"

int a = 14;

int main(void){

    print_a();

    print("Hello world");

    return 0;
}

// to compile we can

/*
1. raw gcc

gcc -o name file1.c file2.c ..... 

we dont need to copmile headers as they are auomatically compiled with the sources


if you dont want to build everything again you can use

gcc -o name file.c file2.o/obj where o or obj is the file that has no changes

*/

/*
2. Makefiles

no idea the book only shows linux make files
*/









//stupid book is gonna tell me how to build at the end of the chapter
// who does that?
// "HEY YOU CAN DO THIS COOL STUFF"
// "HERES ALL THE THEORY YOU NEED FOR IT"
// "HERES MORE THEORY THAT YOU DONT NEED FOR IT"
// "DONT WORRY ONLY 20 MORE PAGES TILL YOU CAN DO IT AS WELL"
// IN THE MEANTIME LEARN INPUT OUTPUT REDIRECTION OR SOME smit"