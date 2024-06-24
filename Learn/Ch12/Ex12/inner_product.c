/*dunno what this is, seems like some kind of dot prduct but with lists*/
#include <stdio.h>

double inner_product(const double *a, const double *b, int n){
    double inner_product = 0;
    for (const double *p = a, *q = b; p < a + n; p++, q++)
        inner_product += *p * *q;

    return inner_product;
}

int main(void){
    double a[] = {1,2,3,4,5}, b[] = {1,2,3,4,5};

    printf("%lf", inner_product(a, b, 5));

    return 0;
}