//  THERES NO BOOLEAN NATIVLEY IN C!!!!!!!!!!!!!!!!!!!!!!
// instead they use 1 and 0


#include <stdio.h>

int main()
{
    // relational operaors are left associative

    //SO

    //while you can do this

    1 > 2 > 3;

    // it actually means (1 > 2) > 3
    // which means 0 > 3, returning 0

    // logical opperators not, and , or:

    // ! not - unuary
    // && and -bianry
    // || or -binary 

    // 1 and 0 are not necesatly needed. any value beside 0 is true, while 0 is false
    // so 2007 is true

    // the evaluations will not be done completely if there is no need for it
    // eg

    1 != 1 && 1+1 ==2;
    
    // as 1 does, in fact, equal to 1, the output of that one is 0, so there is no need to evaluate the second expression, as it is irrelevant to the answer now

    // we can use this to avoid divison by 0

    // consider:

    int i = 0;

    (i != 0) && 10/i > 0; // as the first statement is false, there is no need to do the second, ans engage in that mathematical mystery

    /*
    printf("%d", 1/i);  // damn compiler is too smart
    */

   // must carefull of this
    // some side effects might not happen as a result of this, eg incrementation 
    return 0;
}