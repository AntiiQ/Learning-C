/* Basic inputs*/

#include <stdio.h>

int main(void)
{ 
    // now how do we take an input from an user?
    // through scanf() 
    // which is the counterpart to printf
    //f stands for formated

    int i;
    float x;

    printf("this: ");
    scanf("%d", &i); // reads an integer and stores it in i
    printf("%d\n", i);

    //There's no need for the \n as when the user presses enter to submit the input, a new line is made automatliccly 


    printf("that: ");
    scanf("%f", &x); // reads a floating point and stores it in x
    printf("%f\n", x);

    // the variable where they are stored has to be of an appropriate type

}