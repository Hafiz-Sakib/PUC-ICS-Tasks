
// Given three edges (a, b and c) of a triangle, determine its area.

#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, s, area;

    printf("Enter sides of a triangle\n");
    scanf("%lf%lf%lf", &a, &b, &c);

    s = (a + b + c) / 2; // Semiperimeter

    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of the triangle = %.2lf\n", area);

    return 0;
}

// Formulla:

// s=(a+b+c)/2
// area = √{s(s-a)(s-b)(s-c)}