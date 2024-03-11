/*calcualtes powers*/

#include <stdio.h>

long long power(int x, int n)
{
    if (n == 0){
        return 1;
    }else if (n % 2 != 0){
        return x * power(x, n-1);
    }else{
        long long temp = power(x, n/2);
        return temp * temp;
    }
}

int main(void)
{
    for (int i = 1; i < 20; i++)
        printf("10^%d = %lld\n", i, power(10, i));

    return 0;
}