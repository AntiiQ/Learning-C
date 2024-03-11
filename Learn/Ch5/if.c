#include <stdio.h> 


int main()
{
    // if (expression) statement
    
    // if the expression is non-zero- which C interprets as true- then the statement is executed

    int i = 21;

    if ( i == 0){
        printf("%d\n",i); // ussualy only the line directly after the if statement is the statement
        i = 1;
    } // {} do something i guess
    printf("%d\n",i); // "intetation is a suggestion" :(

    // when there is no {} the statement is singular
    // when there are the statement is plural, a compound statement
    // its more like forcing the compiler to treat it as a single statement

    // now onto else

    // if (expression) statement else statement

    int j = 12, max;

    if (j>i) {max = j;}
    else {max =i;} // The {are there for clarity}

    // in C elif isnt a single command, its actually just a mixture of two if statement, its another if statment running in the else clause of another if statement

    int n = 15;

    if (n < 0) {
        printf("n is less than 0\n");
    } else if (n == 0) { // notice how the else and if could have been written on seperate lines
        printf("n is equal to 0\n");
    } else {
        printf("n is larger than 0\n");
    }

}