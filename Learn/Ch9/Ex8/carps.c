/*Wierd ass dice game never heard of it*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{
    int wins = 0, losses = 0;
    char confirmation;
    srand(time(NULL));

    for (;;){
        if (play_game()){
            printf("You win!\n");
            wins++;
        }else{
            printf("You lose!!!\n");
            losses++;
        }

        for(;;) {
            printf("\nPlay again? ");
            scanf(" %c", & confirmation);
            if (confirmation == 'N' || confirmation == 'n'){
                printf("\nWins: %2d   Losses: %2d\n", wins, losses);
                return 0;
            }else if (confirmation == 'Y' || confirmation == 'y'){
                printf("\n");
                break;
            }
        }
    }
}

int roll_dice(void)
{ 
    return (rand() % 6 +1) + (rand() % 6 +1);
}

bool play_game(void)
{
    int sumDice, point;

    printf("Your rolled: %d\n", sumDice = roll_dice());
    if (sumDice == 2 || sumDice ==3 || sumDice == 12)
        return false;
    else if (sumDice == 7 || sumDice == 11)
        return true;
    else{
        printf("Your point is: %d\n", point = sumDice);
        for(;;){
            printf("Your rolled: %d\n", sumDice = roll_dice());
            if (sumDice == 7)
                return false;
            else if (sumDice == point);
                return true;
        }
    }
}