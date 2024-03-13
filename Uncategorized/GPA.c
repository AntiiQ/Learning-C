/*COmputes GPA*/
#include <stdio.h>

float computeGPA(int n, char grades[n]);

int main(void)
{
    char grades[] = {'A', 'B', 'C'};
    int n = sizeof(grades)/ sizeof(grades[0]);

    printf("GPA: %f\n", computeGPA(n, grades));

    return 0;
}

float computeGPA(int n, char grades[n])
{
    int sum = 0;
    for (int m = 0; m < n; m++){
        if (grades[m] >= 'A')
            grades[m] = (grades[m] - 'A') + 'a';

        switch (grades[m]){
            case 'a': sum += 4; break;
            case 'b': sum += 3; break;
            case 'c': sum += 2; break;
            case 'd': sum += 1; break;
            default:            break;
        }
    }

    return (float) sum/n;
}