/*Random number guesser game*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*External Vars*/
int secret_number;

#define MAX 100

void initialize_rng(void);
void choose_secret_number(void);
void user_guess(void);

int main(void)
{
    printf("Guess a number between 1 to 100");
    initialize_rng();


    char confiramtion = 'a';
    while (1){
        choose_secret_number();
        user_guess();
        printf("\nPlay again? ");
        scanf(" %c", &confiramtion);
        if (confiramtion != 'Y' || confiramtion != 'y')
            break;
    }
}

void initialize_rng(void)
{
    srand(time(NULL));
}

void choose_secret_number(void)
{
    secret_number = rand() % MAX + 1;
    printf("\nA new secret number has been choosen!\n");
}

void user_guess(void)
{
    int guess, num_of_guesses = 0;
    for (;;) {
        num_of_guesses++;
        printf("Enter guess: ");
        scanf("%d", &guess);

        if (guess == secret_number){
            printf("You won in %d guesses!\n\n", num_of_guesses);
            return;
        }else if( guess < secret_number){
            printf("Too low; try again.\n");
        }else{
            printf("Too high; try again.\n");
        }


    }
}