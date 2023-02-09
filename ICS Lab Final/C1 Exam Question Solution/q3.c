/* Write a C Program that takes the radius of a circle as input and displays the area of that circle.Note Use Pi as acos(-1.00) */
#include <stdio.h>
#include <math.h>
int main()
{
    int radius;
    float PI = acos(-1);
    float area;
    scanf("%d", &radius);
    area = PI * radius * radius;
    printf("%.2f", area);

    return 0;
}