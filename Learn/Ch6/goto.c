/*looking at the goto statement*/

//goto is the grandfather of break, contimue, return

#include <stdio.h>

int main(void)
{
    // it is hardly ever usefull

    // however is has its moments

    // like breaking out of nested loops

    while(1){
        switch(1){
            case 1: goto loop_done;
        }
    }
    loop_done: 
    printf("skipped the inifinte loop");

    return 0;
}