/*Seeing how to initialize a string*/

int main(void)
{
    int a[4] = {1 , 2}; /*a will be {1, 2, 0 ,0}*/

    int b[2]; /*a is uninitialized thus should not be used*/

    int c[3] = {0}; /* a is initialized to {0, 0, 0}*/

    int d[] = {1, 2, 3}; /*if an initializer is present the length may be ommited, and will be assumed to be the length of that initializer*/

    // some indexes can be designated when initialzing

    int e[14] = {[3] = 1, [13] = 2, [7] = 12}; //order doesnt matter

}