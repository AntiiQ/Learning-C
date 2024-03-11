// directives (eg "#include <stdio.h>"")

#include <stdio.h> // this directive states taht the infoemation in <stdio.h> has to be included into the program (before compiling)

/* <stdio.h> is a header, C has a numebr of these, each containg info about some part of the standard library (STDs)

C has no built in read and write commands, so they are provided by functions inside the standard library */

int main(void) // this is a function named main, C works in collcetion of functions
{   // but main is a special boy, it is mandadtory executed when the program is run 

    // the int states that they function should return an integer value
    // the void states that the function has no parametres, known in C as arguments
    // - begin main program

    // statements (main program)
    // calling a function is asking a funtion to perform its assigend task
    return 0; // funtion will still treminate without this, but some compiles might start arguing, as the function didnt complete its goal: returning a int
}
 // - end main rogram

/* 
 * This
 * is
 * a proper
 * comment
 */