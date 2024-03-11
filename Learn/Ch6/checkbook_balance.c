/*Cheackbook balancing program*/

#include <stdio.h>

int main(void)
{
    float balance = 0.00f, debit, credit;
    int cmd;

    printf("*** Vasl's shitty checkbook-balancing progamrn ***\n");
    printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");

    for(;;){
        printf("Enter command: ");
        scanf("%d", &cmd);

        switch (cmd){
            case 0: printf("Balance cleared\n");    
                    balance = 0.00f;    
                    break;

            case 1: printf("Enter amount to credit: ");
                    scanf("%f", &credit);
                    balance += credit;
                    break;

            case 2: printf("Enter amount to debit: ");
                    scanf("%f", &debit);
                    balance -= debit;
                    break;

            case 3: printf("Current balance: $%.2f\n", balance);  
                    break;

            case 4: //goto exit; --> possibility, but we dont really like using goto's
                    printf("Thanks for being with us\nGoodbye");

                    return 0;
            default:    printf("Illegal cmd, try again\n");
                        break;
        }
    }
    /*
    exit:
    printf("Thanks for being with us\nGoodbye");

    return 0;
    */
}