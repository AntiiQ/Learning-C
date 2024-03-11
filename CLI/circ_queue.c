/*A simple Circular Queue alorithm that is probably an abomination*/

#include <stdio.h>

#define SCOPE 6 // size you want + 1

int en(int first, int last, char q[]);
int de(int first, int last, char q[]);
void vi(int first, int last, char q[]);

int main(void)
{
    char q[SCOPE];
    int first = 0;
    int last = 0;
    
    char user;
    
    for (;;){
        printf("(e)queue, (d)equeue, (v)iew, (l)eave? ");
        user = getchar();
        
        for (;getchar() != '\n';); // input sanitation
        
        if (user == 'l'){
            printf("Leaving...");
            return 0;
        }else if (user == 'e'){
            // enqueue
            last = en(first, last, q);

        }else if (user == 'd'){
            // dequeue
            first = de(first, last, q);
            
        }else if (user == 'v'){
            //view
            vi(first, last, q);

        }else{
            printf("Invalid command\n");
        }
    }
}

int en(int first, int last, char q[])
{
    if ((last + 1) % SCOPE == first || (first == 0 && last == SCOPE - 1)){
        printf("Queue is full.\n");
        return last;
    }  
    
    printf("Enter the characater: ");
    q[last] = getchar();

    for (;getchar() != '\n';); // input sanitation

    printf("Queuing %c...\n", q[last]);

    last++; 
    if (last == SCOPE) last = 0;

    return last; 
}

int de(int first, int last, char q[])
{
    if (first == last){
        printf("Queue is empty.\n");
        return first;
    }
    printf("Dequeing %c...\n", q[first]);

    first++;
    if (first == SCOPE) first = 0;
    
    return first;
}

void vi(int first, int last, char q[])
{
    if (first == last){
        printf("Queue is empty.\n");
        return;
    }

    while (first != last){
        printf("[%c]", q[first]);
        first++;
        if (first == SCOPE) first = 0;
    }
    printf("\n");
}