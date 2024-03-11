/*Greatest common divisor*/

#include <stdio.h>

/*  
    Euclid's Algorithm:
    Let m and n be two variables containing the two numbers.
    If n is 0, then stop: m contains the GCD.
    Otherwise compute the remainder when m is divided by n.
    Copy n into m ans copy the remainder into n.
    Then repreat the process, starting with teating wheather n is 0.
*/

int main()
{
    int n, m, r; // r - remainder, m/n common variables

    printf("Enter two integers: ");
    scanf("%d%d", &n, &m);

    while (n != 0){
        r = m % n;
        m = n;
        n = r;
    }

    printf("Greatest common divisor: %d", m);
    
    return 0;
}
