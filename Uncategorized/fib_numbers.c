/*Fibbonaci number up to 40*/

#include <stdio.h>

int main(void)
{
	int fib[40] = {1,1};

	for (int i = 2; i < (sizeof(fib)/sizeof(fib[0])); i++){
		fib[i] = fib[i-1] + fib[i-2];
	}
	
	for (int x = 0; x < (sizeof(fib)/sizeof(fib[0])); x++){
        printf("%d\n", fib[x]);
    }

    return 0;

}

