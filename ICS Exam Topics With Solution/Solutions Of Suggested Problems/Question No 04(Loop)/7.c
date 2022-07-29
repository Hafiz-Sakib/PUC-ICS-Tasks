/* Write a C program to input number from user and find sum of all even numbers between 1 to n. How to find sum of even numbers in a given range using loop in C programming. Logic to find sum of even numbers in a given range in C program. */
#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    scanf("%d", &n);
    for (i = 2; i <= n; i += 2)
    {
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}