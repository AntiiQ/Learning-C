// incrementation is simple

#include <stdio.h>

int main()
{
    // or is it?

    int i, x, y;

    i = x = y = 0;

    // you can do this
    i += 1;

    //or this
    x++;  //pre increment

    //or this
    ++y; //post increment

    // these are all assignments 
    // no matter where you do them, they will have side effects

    printf("i is %d\n", ++i); // this is a pre- increment
    printf("i is %d\n", i); // both should output the same thing, as i has been permanently incremented immedetly

    printf("x is %d\n", x++); // this is a post increment 
    printf("x is %d\n", x); // they should have diffrent values, as i is incremented after use


}