
#include <stdio.h>
#include <math.h>


int countDigitOne(int n) {
    int count = 0;

    for (int i = 1; i <= n; i++) {
        int temp = i;
        
        while (temp > 0) {
        count += (temp % 10 == 1);
        temp /= 10;
        }
    }

return count;
}

int countDigitOneGene(int n) {
    int count = 0;
    int copy = n;
    int count_mag = 0;

    while (copy / 10 != 0) {count_mag++; copy /= 10;}
    printf("%d ", copy);
    printf("%d\n", count_mag);

        if (copy == 1) {count += count_mag*pow(10,count_mag-1)+1;
        } else {
            count += (12 + 2*(count_mag-1) + count_mag * (copy-2))*pow(10,count_mag-1);
        }

    while (copy != n){
        copy = (n / (int) pow(10, --count_mag)) % 10; 

        if (copy == 1) {
            count += count_mag*pow(10,count_mag-1)+1;
        } else {
            count += (12 + 2*(count_mag-1) + count_mag * (copy-2))*pow(10,count_mag-1);
        }
    }


        
    
return count;
}


int main(void){
    int x = 200;
    printf("%d\n", countDigitOne(x));
    printf("%d", countDigitOneGene(x));

    return 0;
}