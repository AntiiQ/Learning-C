/*Caclcuates quiz total and avreage for 5 students across 5 quizes*/


#include <stdio.h>
#include <limits.h>

int main(void)
{
    int scores[5][5] = {0};

    for (int i = 0; i < 5; i++){

        printf("Enter scores for quiz %d:", i+1);
        for (int x = 0; x<5; x++)
            scanf("%d", &scores[i][x]);
    }

    // quiz totals and average

    int quiz_t[5] = {0};
    int quiz_a[5] = {0};
    int min = INT_MAX , max = 0;


    for (int i = 0; i < 5; i++){
        for (int x = 0; x < 5; x++){
            quiz_t[i] += scores[i][x];
        }
        quiz_a[i] = quiz_t[i] / 5;

        if (min > quiz_t[i])
            min = quiz_t[i];

        if (max < quiz_t[i])
            max = quiz_t[i];
    }



    // student total and average

    int student_t[5] = {0};
    int student_a[5] = {0};

    for (int i = 0; i < 5; i++){
        for (int x = 0; x < 5; x++){
            student_t[i] += scores[x][i];     
        }
        student_a[i]= student_t[i] / 5;
    }


    printf("\nQuiz totals:\t");
    for (int i = 0; i < 5; i++){
        printf("%d ", quiz_t[i]);
    }
    printf("\nQuiz average:\t");
    for (int i = 0; i < 5; i++){
        printf("%d ", quiz_a[i]);
    }
    printf("\nQuiz low score: %d", min);
    printf("\nQuiz high score: %d", max);

    printf("\n\nStudent totals:\t\t");
    for (int i = 0; i < 5; i++){
        printf("%d ", student_t[i]);
    }
    printf("\nStudent average:\t");
    for (int i = 0; i < 5; i++){
        printf("%d ", student_a[i]);
    }

    return 0;

}