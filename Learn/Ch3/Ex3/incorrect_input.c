#include <stdio.h> 

int main()
{
    int i, j;
    float x;
    
    printf("Enter: ");
    scanf("%d %f %d", &i, &x, &j);
    printf("%d\n", i);
    printf("%f\n",x);
    printf("%d\n", j);

    printf("test: ");
    scanf("%d", &j);
    printf("%d", j);

    return 0;
}

/* If the input is 10.3 5 6,
scanf will see 10 then the ., reconise that . cant be in an integer, and put it back, and store 10 in i
then it will scan .3, see the white space after and store .3 into x, 
then it will skip the white space, see 5, then another white space and store 5 into j

the 6 is forgotten

not really, if another scanf where to occur, and its pattern matched the 6 in the incput buffer */