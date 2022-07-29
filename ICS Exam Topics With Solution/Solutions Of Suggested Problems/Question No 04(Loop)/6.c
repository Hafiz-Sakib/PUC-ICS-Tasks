/* Write a C program to find the sum of all natural numbers between 1 to n using for loop. How to find sum of natural numbers in a given range in C programming. Logic to find sum of all natural numbers in a given range in C programming. */
#include <stdio.h>
int main()
{
    int i, sum = 0, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);
    return 0;
}