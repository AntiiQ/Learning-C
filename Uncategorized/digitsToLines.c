/*converts some digits into a seven segment display format*/

#include <stdio.h>
#include <ctype.h>

#define MAX_DIGITS 10


/*Extrenal Variables*/


//      _
//     |_|
//     |_|  
//

// Conversions between ints to lines
const int segment[10][7] = {{0,0,0,0,0,0,0}, {0,1,1,0,0,0,0}, {1,1,0,1,1,0,1}, 
                      {1,1,1,1,0,0,1}, {0,1,1,0,0,1,1}, {1,0,1,1,0,1,1},
                      {1,0,1,1,1,1,1}, {1,1,1,0,0,0,0}, {1,1,1,1,1,1,1},
                      {1,1,1,1,0,1,1}}; 

// how it will be printed
char digits[4][MAX_DIGITS *4] = {};

const int segment_grid[7][2] = {{0,1},
                                {1,2},
                                {2,2},
                                {2,1},
                                {2,0},
                                {1,0},
                                {1,1}};


/*function prototypes*/
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
    char digit;
    int position = 0;

    printf("Enter the numbers you want converted (max %d): ", MAX_DIGITS);

    clear_digits_array();

    while ((digit = getchar()) != '\n'){
        if (isdigit(digit)){
            process_digit(digit - '0', position);
            position += 4;
        }
    }

    print_digits_array();

    return 0;
    
}

void clear_digits_array(void)
{
    for (int i = 0; i < 4; i++)
        for (int x = 0; x < (MAX_DIGITS * 4); x++)
            digits[i][x] = ' ';
}

void print_digits_array(void)
{
    for (int i = 0; i < 4; i++){
        for (int x = 0; x < MAX_DIGITS * 4; x++){
            printf("%c", digits[i][x]);
        }
        printf("\n");
    }
}

void process_digit(int digit, int position)
{
    int row, clm;

    for (int i = 0; i < 7; i++){
        if (segment[digit][i]){
            row = segment_grid[i][0];
            clm = segment_grid[i][1] + position;
            digits[row][clm] = i % 3? '_' : '|'; 
        }
    }
}