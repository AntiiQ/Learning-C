/*CLI thingie, takes strings as arguments and says what order of planets they are*/

#include <stdio.h>
#include  <string.h>
#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
    char *planets[] = {"Mercury", "Venus", "Earth",
                       "Mars", "Jupiter", "Saturn",
                       "Uranus", "Neptune", "Pluto"};
    int j;

    for (int i = 1; i < argc; i++){ //argv[0] is the name of the exe, so thats why it starts at 1
        for (j = 0; j < NUM_PLANETS; j++){
            if (strcmp(argv[i], planets[j]) == 0){
                printf("%s is planet no. %d.\n", argv[i], j+1);
                break;
            }
            

        }
        if (j == NUM_PLANETS)
            printf("%s is not a planet.\n", argv[i]);

    } 
    return 0;

}