/**
 * C program to check positive negative or zero using simple if statement
 */

#include <stdio.h>

int main()
{
    int num;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Number is POSITIVE");
    }
    if (num < 0)
    {
        printf("Number is NEGATIVE");
    }
    if (num == 0)
    {
        printf("Number is ZERO");
    }

    return 0;
}