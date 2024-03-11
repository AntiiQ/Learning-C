/* Returns the smallest and biggest number in */

# include <stdio.h>

int main()
{
    int a, b, c, d, big, small;

    printf("Enter four numbers: ");

    scanf("%d%d%d%d", &a, &b, &c, &d);

    
    if (a > b && c > d) {
        big = a > c? a : c;
        small = b < d ? b : d;
    }
    else if (b > a && d > c){
        big = b > d ? b : d;
        small = a < c ? a : c;
    }
    

   

    printf("Biggest: %d\nSmallest: %d", big, small);

    return 0;
}