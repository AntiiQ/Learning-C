/*simple sum array funtion that uses pointer arithmetic instead of subscripting*/

int sum_array(const int *a, int n){
    int *p, sum = 0;

    for(p = a; p < a + n; p++) sum += *p;

    return sum;
}