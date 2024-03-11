/*Cool fact about multidimesional arrays*/

int main(void){

    int m[3][3] = {{1,2,3},
                   {2,3,4},
                   {3,4,5}};

    // if you leave anything blank the compiler will assume its 0

    int c[2][2] = {1,2,3,4};

    //you dont need the inner brackets if youre gonna fill it out completely
    // once one row is filled, it begins the next

    //designated initiallizers (C99)

    int identity[2][2] = {[0][0] = 1, [1][1] = 1};

    // everything else is 0

}
