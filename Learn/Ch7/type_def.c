#define BOOL int

#include <stdio.h>

int main(void)
{
    // typedef base-type name
    
    typedef int Bool; // convention to capitalize
    
    Bool flag; // makes programs more understandable 

    //eg Dollars cash_in; could be more undestandable than float cash_in;
    
    // could also help with poratbility, as there is no need to change all type declarations, just the type def
    // though this doesnt help with printf("%d") for example
    
    return 0;
}