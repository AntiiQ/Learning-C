/*Learing about the preprocessor*/

// previously i have learend about #define and #include, classic preprocessor commands

// the preprocessor edits C programs right before compiling
// it is unique to C based languafes

/*How it works*/
// All preprocessor commands start with a #

//#define 
// just remmeber to define type like:
// #define deci 32.0f

// Learn GCC


// directives can be continued onto a new line using \
// You can use #define to change c syntax

/*
#define Begin {
#define End }
*/

/*Parameterized Macros*/
// macros that take in a parameter
#define MAX(x,y) ((x) > (y) ? (x) : (y))

// usefull

#define PRINT_INT(n) printf(#n "= %d\n", n)

// the #n rewrites n as a string, andasdjecent stings get combined (always)

// token pasting ##
// used to make many similar identifiers

#define MK_ID(n) i##n 

// any MK_ID(n) calls will become in;

/*Built in Macros*/

// __DATE__ date of compilation
// __TIME__ time of commilation
// __LINE__ line number of file being compiled


/* EXCESSIVE USE OF PARANTHESES IS NOT RECOMMENDED, IT IS ENFORCED!!!!!!*/
/*Conditional  Compilation*/
