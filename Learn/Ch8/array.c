/*Looking into arrays*/

#define b_length 10
#include <stdio.h>

int main(void)
{
    // so far i have only seen scalar variables, capable of only storing one data item

    // arrrays are aggregate, they can store multiple
    
    // to declare an array that will sore 11 ints:

    int a[11]; // a macro can be used to specify length

    // its a great practive to do so, as they arrays might need to be changed lated down the road

    int b[b_length];

    // array be has items with indexes 0-9
    // accesing on of those numbers is called indexing 
    a[0] = 10;

    printf("%d", a[0]);
}