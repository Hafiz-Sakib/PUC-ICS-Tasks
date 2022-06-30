/*
Write a C program that takes an integer number(x) as input and determines whether the number is odd or even.
For more clarification, check sample input/output.
 */

#include <stdio.h>

int main()
{
    int x;
    printf("Enter the any Integer Number: \n");
    scanf("%d", &x);

    if (x % 2 == 0)
    {
        printf("This is Even Number");
    }
    else
    {
        printf("This is Odd Number");
    }

    return 0;
}