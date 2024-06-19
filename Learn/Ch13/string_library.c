/*The C string library*/

#include <string.h>

char *strcpy(char *s1, const char *s2);
// copies s2 into s1, including '\0'
// returns a pointer to s1
// no way of checking if s1 can actually hold all the characters in s2, thus not safe

char *strncpy(char *s1, const char *s2, int n);
// slower than the original
// copies n characters from s2 into s1  
// usualy doesnt copy the null character so the better way to use it is to sizeof(s1) - 1, and then assing index sizeof(s1) -1 as '\0


size_t strlen(const char *s);
// size_t is one of C unsigned int types, if the string isnt that large we can just treat it as a regular int
// returns the lenght of the string, not of the array itself

char *strcat(char *s1, const char *s2);
// conactenates s2 onto the end of string s1
// doesnt care for size of s1....

char *strncat(char *s1, const char *s2, int n);
// concatenates first n characters of s2
// usually n will be somthing like: sizeof(str1) - strlen(s1) - 1
// will ternimate s1 with a null cahracter, the -1 is to ensure there is space for one

int strcmp(const char *s1, const char *s2);
//compares s1 with s2
// returns int that is bigger or smaller or equal to 0, depending if s1 is bigger, smaller or equal to s2


// sprintf(day_str, "%2d", day)
// writes the values of day into day_str
// will termiate the str with a null char

// scanf can be specifed to stop reading after some digits by putting a number after & (eg &2d will read the first 2 digits of a number)


int main(void)
{

}