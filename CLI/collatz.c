/*Collatz conjeture number of steps calculator*/
// only prints the odd numbers www

#include <stdio.h>
#include <time.h>

int main(void)
{

    unsigned long long number, goal = 0, start = 0, steps, longestSteps = 0, longestNumber;

    printf("Enter range of numbers to be tested (eg 1-10): ");
    scanf("%llu - %llu", &start, &goal);

    clock_t start_time = clock();
    
    for (unsigned long long i = start; i <= goal; i++){
        number = i;
        steps = 0;

        while (number != 1){
            steps++;
            if (number % 2 != 0){
                number = 3*number + 1;            
            }else number = number / 2;
        }
        if (steps > longestSteps) {longestNumber = i; longestSteps = steps;}




    }

    printf("The number with the most steps is: %llu, with %llu steps.\n", longestNumber, longestSteps);
  
    
    clock_t end_time = clock();
    double elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    

    printf("Elapsed time: %.2f minutes\n", elapsed_time / 60);

    return 0;  
}