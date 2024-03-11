/* 5th Degree Polynomial Multiplier*/

// equation ax^5 + bx^4 + cx^3 + dx^2 + ex + f

#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, f, x;

    printf("5th degree polynomial standard expersion: ax^5 + bx^4 + cx^3 + dx^2 + ex + f\n\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    printf("d: ");
    scanf("%d", &d);
    printf("e: ");
    scanf("%d", &e);
    printf("f: ");
    scanf("%d", &f);
    printf("\nFinally x: ");
    scanf("%d", &x);

    printf("\n\nThe answer is: %d", (a*x*x*x*x*x) + (b*x*x*x*x) + (c*x*x*x) + (d*x*x) + (e*x) + f);

    return 0;
    


}