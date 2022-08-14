/* Write a C program that takes three sides of a triangle as input and displays the area of that triangle  */
#include <stdio.h>
#include <math.h>
int main()
{
    int side1, side2, side3;
    float s, area;
    scanf("%d%d%d", &side1, &side2, &side3);

    s = (side1 + side2 + side3) / 2.0; // S represents অর্ধপরিসীমা

    area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

    printf("%f\n", area);

    return 0;
}