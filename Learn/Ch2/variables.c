/* Basic Variables*/

#include <stdio.h>

int main(void)
{
    // VARIABLES MUST BE DECLARED, F YOU PYTHON
    int height;
    float pounds;

    // can also declare multiple at a time, like python
    int x, y, value;
    float a, b, pi;

    // it is common curtesy to declare before statements, however it is not mandatory in C99 onwards

    //after delacring we can assign values (constants)
    height = 182;
    pounds = 0.25f;  // should include f after a float, as the complier likes them f's

    value = height * pounds;

    pi =  3.1415142345827385738;  // i promise this is true

    // printing is fun
    printf("height is:  %d\n", height); // %d is a place holder for where the int varaible with be
    printf("Pi: %f\n", pi); // %f is a place holder for floats, however it automaticlly goes for 6 d.p
    printf("value: %d\n", value); r

    printf("pi to 10 dp: %.10f\n", pi); // to 'p' dp '%.pf'
    printf("pi to 0 dp: %10.10f\n", pi); // to 0 dp '%0.0f'

    //wierdly if you put '%p.0f' it puts spaces before it, number of which is p-1

    //Addendum: it doesnt just add spaces, it forces the value to occupy p number of spaces, both the whole and fractional

    printf("all together now: %dx%.2f=%d", height, pounds, value);

    // basic arithemtic:
    // + - * work fine

    // / works like a div
    // so i only returns the whole number 

    // cool way to round up
    // eg you want 19/10 to retun 2 intsead of 1
    // add 9 (value of denominator -1)
    // will always round up

    // Initialization 

    // when a declared variable doesnt hold a value, it is known as 'uninitialized'
    // opearting with such variables could result in unpredictable and perhaps dangerous results.

    // you can assign variables at the same time as you declare them

    int aah = 101, bah = 9;


    // each one has to be given a value seperatly
    return 0;
}
