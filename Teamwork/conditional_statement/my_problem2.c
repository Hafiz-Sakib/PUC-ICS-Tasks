/*  Check whether the triangle is equilateral, scalene, or isosceles
Before writing the program, we should know the properties of isosceles, equilateral, and scalene triangles.

Isosceles triangle: In geometry, an isosceles triangle is a triangle that has two sides of equal length.

Equilateral triangle: In geometry, an equilateral triangle is a triangle in which all three sides are equal.

Scalene triangle: A scalene triangle is a triangle that has three unequal sides. */

#include <stdio.h>
int main(void)
{
    int triSide1, triSide2, triSide3;
    /* Get sides of a triangle from the user */
    printf("\n Enter first side of triangle: = ");
    scanf("%d", &triSide1);
    printf("\n Enter second side of triangle: = ");
    scanf("%d", &triSide2);
    printf("\n Enter third side of triangle: = ");
    scanf("%d", &triSide3);
    if ((triSide1 == triSide2) && (triSide2 == triSide3))
    {
        /* If all sides are equal, then Equilateral triangle*/
        printf("\n Equilateral triangle.\n\n");
    }
    else if ((triSide1 == triSide2) || (triSide1 == triSide3) || (triSide2 == triSide3))
    {
        /* If two sides are equal, then Isosceles triangle*/
        printf("\n Isosceles triangle.\n\n");
    }
    else
    {
        /* If none sides are equal, then Scalene triangle*/
        printf("\n Scalene triangle.\n\n");
    }
    return 0;
}