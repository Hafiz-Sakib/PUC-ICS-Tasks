/* Write a C program to print all odd numbers from 1 to n using for loop. How to print odd numbers from 1 to n using loop in C programming. Logic to print odd numbers in a given range in C programming. */

#include <stdio.h>
int main()
{
    int n, i;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        if (i % 2 != 0)
        {
            printf("%d\t", i);
        }
    }
    return 0;
}