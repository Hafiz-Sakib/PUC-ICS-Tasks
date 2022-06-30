/*
Write a C program to take an integer number(x) as input. Print “Positive” if x>0. If x<0
then print “Negative”. Otherwise print “Zero”.
[N. B. Do not print the quotation.]
 */
#include <stdio.h>

int main()
{
    int x;
    printf("Enter a Number: \n");
    scanf("%d", &x);

    if (x > 0)
    {
        printf("Positive");
    }
    else if (x == 0)
    {
        printf("Zero");
    }
    else
    {
        printf("Negative");
    }
    return 0;
}