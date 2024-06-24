/*simple look into pointer arithmetic*/

#include <stdio.h>

int main(void)
{
    int a[3], *p;

    p = &a[2]; // p points to the 3rd item in a now

    // C allows the folloing aritmetic to pointers:

    // Adding an int to a pointer
    // subtracting an integed form a pointer
    // subtractiong one pointer from another

    // the last one can be used to find the distance form 2 items in an array i guess

    int b[10], *q;

    for (q = &b[0]; q < &b[10]; q++); // the loop doesnt actually try to examine b[10] as that would turn out for the worse
                                      // it just gets teh adress of b and adds 10


    // Theres no real need for pointer subscripting anymore as compilers are getting more efficent
    // actually normal subscripting is probably more efficent

    // ++ takes precedence over * or &

    // The name of an array can be actually used as a pointer to the first element in that array

    //so

    int c[] = {0,1,2,3,4,5,6,7,8,9};

    printf("%d and %d", *c, c[0]); // these should do the same thing
    

    // Arrays arent actually passed into a fucntion, only a pointer to the first element is, this means they are not automatically protected against chage,
    // but this also means that no matter the size, they wont accupy more space

    // actually array names are fully useless just use pointers alltogether

    int w[] = {1,2,3}, *h;
    printf("%d", h[2]); // works like a charm and we dont even need to refrence wwwwwww


    return 0;
}