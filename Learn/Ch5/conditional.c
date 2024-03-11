/* CONDITONAL EXPRESIONS*/

// expr1 ? expr2 : expr3

// if expr1, then expr2, else expr3

int main ()
{
    int i,j,k;

    i =1;
    j=2;
    k = i> j ? i : j; /* k is now 2*/

    // if i > j then k = i, else k = j

    k = (i >= 0 ? i : 0) + j;  /* k is now? */

    // (if i >= 0, then i else 0) + j

    return 0;

}