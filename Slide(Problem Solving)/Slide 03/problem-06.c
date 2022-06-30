/*
Write a C program that takes an integer number(x) as input and checks whether the number is a square number or not.
For more clarification, check sample input/output.
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int x, a;
    printf("Input any Positive Number: \n");
    scanf("%d", &x);

    a = (int)sqrt(x);

    if (x == a * a)
    {
        printf("This Number is Square");
    }
    else
    {
        printf("This Number isn't Square");
    }

        return 0;
}