/* Write a C program to find diameter, circumference and area of circle using functions. */
#include <stdio.h>
#include <math.h>
#define pi acos(-1)
float diameter(float radius);
float circumference(float radius);
float area(float radius);
int main()
{
    float radius, d, c, a;
    scanf("%f", &radius);
    d = diameter(radius);
    printf("Diameter = %.2f \n", d);
    c = circumference(radius);
    printf("Circumference = %.2f \n", c);
    a = area(radius);
    printf("Area = %.2f \n", a);
    return 0;
}
float diameter(float radius)
{
    return 2 * radius;
}

float circumference(float radius)
{

    return 2 * pi * radius;
}
float area(float radius)
{

    return pi * radius * radius;
}