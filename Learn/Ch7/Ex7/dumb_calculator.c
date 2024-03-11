/*Making a calculator that doesnt know order of operations*/

#include <stdio.h>

int main(void)
{
    double op1, op2; // operand 1 and 2
    char operator = '\0';

    printf("Enter an expression: ");
    scanf("%lf", &op1);

    while ((operator = getchar()) != '\n') // use getcahr for chars as much as possible 
    {
        scanf("%lf", &op2);
        switch (operator){
            case '+':   op1 += op2;
                        break;
            case '-':   op1 -= op2;
                        break;
            case '*':   op1 *= op2;
                        break;
            case '/':   op1 /= op2;
                        break;
            case '\n':    break;

        }
    }

    
    printf("Value of expression: %lf\n", op1);
    return 0;
}