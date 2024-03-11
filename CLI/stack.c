//Stack
#include <stdio.h>
#include <ctype.h>

#define SCOPE 5

int subtract(int top); //returns new value of top
int add(int top, int stack[], int value_to_be_added); // returns new value of top

int main() 
{
    
    int stack[SCOPE] = {};
    int top = 0;
    int temp;
    char selection;
    
    printf("Input 0 to exit\n");
    for (;;){
        printf("Do you want to add, subtract or view the last item? ");
        scanf(" %c", &selection);
        
        for(; getchar() != '\n';);
        
        if (tolower(selection) == 'v'){
            if (!top){
                printf("Nothing in the stack\n");
                continue;
            }
            printf("Last item is %d\n", stack[top - 1]);

        }else if (tolower(selection) == 'a'){
            printf("What so you want to add? ");
            scanf("%d", &temp);
            top = add(top, stack, temp);
            printf("Value added\n");
            
        }else if (tolower(selection) == 's'){
            if (!top){
                printf("Nothing in the stack");
            }
            printf("Last item removed\n");
            top = subtract(top);

        }else if (selection == '0') {
            break;
        }else{
            printf("Invalid command\n");
        }
    }
        
           
    return 0;       
}
    
    
int subtract(int top)
{
    return --top;
}


int add(int top, int stack[], int value_to_be_added)
{
    stack[top] = value_to_be_added;
    return ++top;
}