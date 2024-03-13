/*A function to find the closest time to a flight*/

#include <stdio.h>
#include <stdlib.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time){
    //kinda wierd how this is here as it would be better for this to be passed along as well as the other things but like who cares. rihgt?
    int time[][2] = {{8*60+0,   10*60+16},
                     {9*60+43,  11*60+52},
                     {11*60+19, 13*60+31},
                     {12*60+47, 15*60+0},
                     {14*60+0,  16*60+8},
                     {15*60+45, 17*60+55},
                     {19*60+0,  21*60+20},
                     {21*60+0,  23*60+58}}; // 0- departure, 1- arrival 

    int min[2] = {1440, 0}; // time and index

    for (int i = 0; i < sizeof(time)/ (2*sizeof(time[0])); i++){
        if (abs(desired_time - time[i][0]) < min[0]) {min[0] = abs(desired_time - time[i][0]); min[1] = i;}
    } 
    
    *departure_time = time[min[1]][0];
    *arrival_time = time[min[1]][1];
}

int main(void)
{
    int desired_time, departure_time, arrival_time,
        hour, minutes; 

    printf("Enter desired time:");
    
    scanf("%d %d", &hour, &minutes);
    desired_time = hour * 60+minutes;

    find_closest_flight(desired_time, &departure_time, &arrival_time);

    printf("Closest departure time %d:%02d, arrriving at %d:%02d", departure_time/60, departure_time%60, arrival_time/60, arrival_time%60);

    return 0;
}