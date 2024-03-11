/*Looking int Break, goto, continue*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // check if prime

    int num;
    bool prime = true;
    printf("Enter an integer thats to be determined if prime: ");
    scanf("%d", &num);

    for (int den = 2; den * den <= num; den++) { //only need to check until the square root of num, reareance so its d^2 < n
        if (num % den == 0){
            prime = false;
            break; // if break is in the if statemetn, it will break out of the loop not the if
        }
    }
    if (prime){
        printf("The number is prime\n");
    } else{
        printf("The number is not prime\n");
    }

    // infinite for loop
    for (int n;;){
        printf("Enter a number (0 to stop): ");
        scanf("%d", &n);

        if (n == 0)
            break;
        printf("%d cubed is %d\n", n , n*n);
    }
    // a break, will only break out of one layer of looping, eg if{while{do (break)}} will only break the do loop

    // continue is simmilar, but it goes to just before the end of the loop, essentially, skipping the rest of the current iteration

    return 0;
}