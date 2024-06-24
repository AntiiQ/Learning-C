/*searching thorugh an unsorted list but with pointers*/

#include <stdbool.h>

bool search(const int *a, int n, int key){
    for (int *p = a; p < a + n; p++)
        if (*p == key) return true;

    return false;
}