
#include <stdio.h>
#include <math.h>
int main()
{
    float radius, area;
    float pi = acos(-1);
    printf("Enter the radius of a circle\n");
    scanf("%f", &radius);
    // theta= (40 * pi)/180;
    area = pi * radius * radius;

    printf("Area of the circle = %.2f\n", area); // printing up to two decimal places

    return 0;
}