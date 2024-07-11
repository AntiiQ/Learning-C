/*Example header file*/

// All protoypes of the funtions of samename.c shuld be here as well as the decrartaions of external variables

#ifndef SOURCE_H // if not defined (SOURCE_H) do the stuff till endif
#define SOURCE_H // defining a 'random' macro so it keeps track, it is definied as 0 currently

// protecting the header so it doesnt compile more than once
extern int a;

void print_a(void);

void print(char*);

#endif