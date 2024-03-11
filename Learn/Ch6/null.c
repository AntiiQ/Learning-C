/*null bodies*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // check if prime

    int num, den;
    bool prime = true;
    printf("Enter an integer thats to be determined if prime: ");
    scanf("%d", &num);

    for (den = 2; den < num && num % den != 0; den++);  // the semicolon on the same line shows how the for loop is empty 
                                                        // not really that much more performant, but it has its uses
    if (den == num){
        printf("The number is prime\n");
    } else{
        printf("The number is not prime\n");
    }

    // accidently putting an : after a statement such as if, while, for, will make that statement have a null body, and thus uselesss
    // carefull as this may create an infinite loop
    return 0;
}