/*nothing much just some ramblings*/

#define ROW_SIZE 10
#define COL_SIZE 10

int main(void)
{
    // remember that c stores mult dimensional arrays in a row major order, rows are stored conitueslly side by size

    int a[ROW_SIZE][COL_SIZE];

    for (int *p = &a[0][0]; p < &a[ROW_SIZE-1][COL_SIZE-1]; p++) // itterates whole array
        *p = 0;

    for (int *p = a[2]; p < a[2] + COL_SIZE; p++) // kinda wierd isnt it? a[2] is technically a pointer to row 3 of a, not a value, thats why this workd
        *p = 1;

    /*
      a[1]: This gives you a pointer to the second row of the 2D array a.
      a[1][1]: This accesses the value at the second row and the second column of the 2D array a.
    */

   for (int (*p)[COL_SIZE] = &a[0]; p < &a[ROW_SIZE]; p++) // this time p points to whole rows of a
    (*p)[2] = 2;

    // p is required to be declared by (*p) cuz otherwise the compiler would treat *p[x] as an array of pointers, not a pointer to an array
    // when using it its requred because *p[x] would be iterpreted  as *(p[i]) 


    // lets look at a real quick, a 2d array
    // a has a type of int (*) [COL_SIZE] -> (pointer to to an int array of lenght col_size)

    // a is not actually a 2d array
    // a is a 1d array with elements that are 1d arrays
    // so a is not a pointer to a[0][0] its a pointer to a[0]!

    //so we can 'simplify' the loop

    for (int (*p)[COL_SIZE] = a; p < a + ROW_SIZE; p++);


}