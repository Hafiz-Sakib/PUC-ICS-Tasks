/* Write a C program to print all even numbers from 1 to n using for loop. C program to generate all even numbers between given range. Logic to print even numbers using if else and for loop in given range in C programming. */
#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    for (i = 2; i <= n; i += 2)
    {
        printf("%d\t", i);
    }
    return 0;
}