/**
 * C program to check whether a triangle is Equilateral, Isosceles or Scalene
 */

/*
 A triangle is said Equilateral Triangle, if all its sides are equal. If a, b, c are three sides of triangle. Then, the triangle is equilateral only if a == b == c.
A triangle is said Isosceles Triangle, if its two sides are equal. If a, b, c are three sides of triangle. Then, the triangle is isosceles if either a == b or a == c or b == c.
A triangle is said Scalene Triangle, if none of its sides are equal. */

#include <stdio.h>

int main()
{
    int side1, side2, side3;

    /* Input sides of a triangle */
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3)
    {
        /* If all sides are equal */
        printf("Equilateral triangle.");
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3)
    {
        /* If any two sides are equal */
        printf("Isosceles triangle.");
    }
    else
    {
        /* If none sides are equal */
        printf("Scalene triangle.");
    }

    return 0;
}