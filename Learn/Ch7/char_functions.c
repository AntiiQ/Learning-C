/*Character handling functions*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch = 'f';

    if ( ch >= 'a' && ch <= 'z' ){ // converting to upper case
        ch = ch - 'a' + 'A'; // taking out the lowercase aspecto f the int // and adding the Upper case aspect of it, the things that are related to a and A will cancel out
    }

    printf("%c\n",ch);
    printf("%d\n", ch);


    // or we can just juse c''s toupper function

    ch = 'a';

    ch = toupper(ch); // needs the ctype.h library

    printf("%c\n",ch); 


    printf("Enter a char: ");
    scanf(" %c",&ch);

    printf("%c\n",ch);

    scanf("%c", &ch); // temp solutin to take that \n out of the input buffer

    printf("Enter a sentence or a word:");

    do {

        scanf("%c", &ch);
        printf("%c", ch);

    } while (ch != '\n'); // checks where the use pressed space

    // as the input buffer will be filled by the \n from the enter, the second call of scanf( the one inside the loop), will pick up that \n, display it, athen stop

    return 0;


}