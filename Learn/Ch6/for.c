/* Exploring for loops*/

#include <stdio.h>

int main(void)
{
    // for(expr1 ; expr2 ; expr3) statement
    int i;

    for (i = 10; i > 0 ; i--) // i is initialized to 10; for as long as i is greater than 0, do this, and decrement i after use
        printf("T minus %d and counting\n", i); // i will be printed 10 to 1, 10 times in total


        // so expr1 is the initialization, performed only once
        // expr2 is the condition performed before every iteration
        // expr3 is an opperation performed afer each iteration
    printf("\n");
    for (i = 10; i > 0 ; --i) // notice that i is decremented immedeatly 
        printf("T minus %d and counting\n", i);

        // yet there is no affect on the output
        // because no matter what, expr3 is done at the end of the iteration

    // for loops are best for counting up or down
    printf("\n");

    // if there is no need for them we can ommit certain expr

    i = 10;
    for (; i> 0; i--){ // as i was initialized previously, expr1 isnt needed here
        printf("HAHA %d!\n", i);
    }

    for (i = 10; i > 0;){ // as the expr3 is ommited, its on the loop itself to ensure the varaible becomes false
        printf("DONT STOP ME\n");
        i--;
    }

    // if you want to remove both, just use a while loop istead

    // in C99, you can declare a variable in a for loop, HOW FUN!
    printf("\n");
    for (int x = 0; x < 100; x++){
        printf("%d\n",x);
    }
    // however you cant access this variable outside the loop
    //printf/*you can commment here?*/("\n%d\n",x);

    // you can decleare more as well!

    for (int x,y,z = 10; z > 0; z--){ // as long as theyre of the same type
        printf("what am i doing with my life?\n");
    } // still wont work outside though

    // comma expressions
    // seen in the previous example

    return 0;
}