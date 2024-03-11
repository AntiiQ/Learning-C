#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

/*DEFINITIONS*/
#define PIN 0000
#define MAX_ATTEMPTS 3
#define Overdraft 1000
#define MAX_WITHDRAWAL 500

/*EXTERNAL VARIABLES*/
float balance = 5000.00;
float withdraw = 0;

    
void interface(void);
bool authenticate(void);
void withdrawl(float amount);
bool deposit(float amount);

int main(void) {

  printf("WELCOME TO {COMPANY} BANKING MACHINE\n");

  if (!authenticate()){
    printf("\nAuthentication Failed!\n");
    return 1;
  }

  interface();

  printf("Thank you for your patronage.\nWe hope to see you again soon.\n");

  return 0;
}
bool authenticate(void){
  int pin_attempt;

  for (int attempts = 1; attempts <= MAX_ATTEMPTS; attempts++) {
    printf("\nEnter your pin: ");
    scanf("%d", &pin_attempt);
    if (pin_attempt == PIN) {
      printf("PIN ACCEPTED\n");
      return true;
    } else {
      printf("WRONG PIN! %d/%d ATTEMPTS LEFT\n", MAX_ATTEMPTS - attempts, MAX_ATTEMPTS);
    }

    for(;getchar() != '\n';); //cleaning the input buffer
  }
  printf("MAX ATTEMPTS REACHED\n");
  return false;
}

void interface(void) {
  int operation;
  float amount;

  do {
    printf("Balnce in account: %.2f\n", balance);
                printf("1. Withdraw   2. Deposit   3. Exit ");
                scanf("%d", &operation);

                switch (operation) {
                case 1:
                  printf("Withdraw selected\nEnter the amount to withdraw: ");
                  scanf("%f", &amount);
                  if (amount > balance) {
                    printf("You do not have that amount in your account.\n"); break;
                  } else if (amount > MAX_WITHDRAWAL) {
                    	printf("Amount entered execeds your maximum allowed "
                           "withdrawal.\n");
                    	break;
                  } else if (withdraw + amount > Overdraft) {
                    	printf("Amount entered would execed your overdraft limit.\n");
						break;
                  } else if (((int)amount) % 10) {
                    printf("Amount must be a multiple of 10.\n");
                    break;
                  } else {
                    printf("Value accepted.\nAttempting to withdrawl...\n");
                    withdrawl(amount);
                    balance -= amount;
                    withdraw += amount;
                    break;
                  }

                case 2:
                  printf("Deposit selected\nEnter the amount to deposit: ");
                  scanf("%f", &amount);
                  if (deposit(amount)) {
                    printf("Deposit accepted.\n");
                    balance += amount;
                    printf("Balance updated.\n");
                  } else {
                    printf("Deposit rejected.\n");
                  }
                  break;
                case 3:
                  printf("Exiting...\n");
                  break;

                default:
                  printf("Invalid selection\n");
                }

  } while (operation != 3);
}

void withdrawl(float amount) {
        printf("Cash is being dispensed...\n");

	return;
}

bool deposit(float amount) {
  printf("Enter $%f in cash or check", amount);

  printf("Amount recived.");
  return true;
}