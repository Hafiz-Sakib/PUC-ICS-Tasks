/**
 * C program to find all roots of a quadratic equation
 */

/* Logic to find all roots of a quadratic equation
Based on the above formula let us write step by step descriptive logic to find roots of a quadratic equation.

Input coefficients of quadratic equation from user. Store it in some variable say a, b and c.
Find discriminant of the given equation, using formula discriminant = (b*b) - (4*a*c).
Learn - Program to find power of a number.

Compute roots based on the nature of discriminant.
If discriminant > 0 then,
root1 = (-b + sqrt(discriminant)) / (2*a) and
root2 = (-b - sqrt(discriminant)) / (2*a).
Learn - Program to find square root of a number using sqrt() function.

If discriminant == 0 then, root1 = root2 = -b / (2*a).
Else if discriminant < 0 then, there are two distinct complex roots where
root1 = -b / (2*a) and root2 = -b / (2*a).
Imaginary part of the root is given by imaginary = sqrt(-discriminant) / (2*a).

After this much reading let us finally code the solution of this program. */

#include <stdio.h>
#include <math.h> /* Used for sqrt() */

int main()
{
    float a, b, c;
    float root1, root2, imaginary;
    float discriminant;

    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ");
    scanf("%f%f%f", &a, &b, &c);

    /* Find discriminant of the equation */
    discriminant = (b * b) - (4 * a * c);

    /* Find the nature of discriminant */
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Two distinct and real roots exists: %.2f and %.2f", root1, root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);

        printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
    }
    else if (discriminant < 0)
    {
        root1 = root2 = -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);

        printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",
               root1, imaginary, root2, imaginary);
    }

    return 0;
}