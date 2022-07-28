// Given the radius(r) and height(h) of a cylinder, determine its volume.

#include <stdio.h>
#include <math.h>
int main()
{

    float radius, height, volume;
    float pi = acos(-1);
    printf("Enter The Value Of Radius : \n");
    scanf("%f", &radius);
    printf("Enter The Value Of Height  : \n");
    scanf("%f", &height);
    volume = pi * radius * radius * height;
    printf("Here is Your  Cylinder Volume: %0.2f", volume);

    return 0;
}
// sakib