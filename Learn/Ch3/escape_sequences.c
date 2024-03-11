#include <stdio.h>

int main()
{
    // \a -- the alert

    printf("\a"); // makes a nice sound, not in vs code

    int i;

    // \b -- backspace

    printf("I am    years old!\b\b\b\b\b\b\b\b\b\b\b\b"); // moves the cursor back on space
    scanf("%d", &i);

    // \t - tab

    printf("HEY!\tYOU!\t YOURE COOL!\n\n");

    // \" -- qoutes inceprtion

    printf("\"Last Words are for those who haven't said enough in their life\"\n\t\t\t - Karl Marx, Last Words\n"); // represents "" int strings

    // \\ -- back slash maddnes

    printf("\\"); // the compiler thinks a single \ is the start of an escape sequence, thus you need 2 \ to represent \
    
    // same with % -- needs %%

    return 0;
}