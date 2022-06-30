/* Write a C program to take an integer number(x) as input and print “Non-negative” if x>=0.
Otherwise print “Negative” without quotation. */
#include <stdio.h>

int main()
{
    int x;
    printf("Input a number: \n");
    scanf("%d", &x);

    if (x >= 0)
    {
        printf("Number is non-Negative");
    }
    else
    {
        printf("Number is Negative");
    }

    return 0;
}