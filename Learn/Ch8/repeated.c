/*detects if a number has repeated digits*/

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool seen_digits[10] = {false};
    int digit;
    long long n;

    printf("Enter a number: ");

    scanf("%lld", &n);

    while (n > 0){
        digit = n % 10;
        if (seen_digits[digit]){
            printf("Digits repeated");
            return 0;
        }
            
        seen_digits[digit] = true;
        n /= 10;
    }

    printf("All fine");
    
    return 0;
}