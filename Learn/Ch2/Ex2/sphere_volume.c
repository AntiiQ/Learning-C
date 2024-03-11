/*  Calculate the volume of a sphere using radius*/

#include <stdio.h>
#define four_thirds (4.0f / 3.0f)  // flaots are needed as othervise it will be defined as 1
#define pi 3.14159

// formula of the volume of a sphere 4/3 * r^3 * pi
// C doesn't natively have an exponent operator

int main(void)
{
    float radius;

    printf("Radius of the sphere: ");
    scanf("%f", &radius);

    printf("Volume of that sphere is %f arbitrary units", (four_thirds * radius * radius * radius * pi));

    return 0;
}