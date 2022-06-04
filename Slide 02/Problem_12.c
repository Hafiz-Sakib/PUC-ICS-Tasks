
// //Unsolved

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     float theta, radius, area;
//     float pi=3.1416;
//     printf("Enter the radius of a circle\n");
//     scanf("%f", &radius);
//     theta= (area * pi)/180;
//     area = theta* radius*radius;

//     printf("Area of the circle = %.2f\n", area);  // printing up to two decimal places

//     return 0;
// }

//Method 02 With Radian Values

//Given the radius(r) of a circle, determine its area..
#include <stdio.h>
#include <math.h>
int main()
{
    float radius, area;
    float pi= acos(-1);
    printf("Enter the radius of a circle\n");
    scanf("%f", &radius);
    // theta= (40 * pi)/180;
    area = pi * radius*radius;

    printf("Area of the circle = %.2f\n", area);  // printing up to two decimal places

    return 0;
}