/* Write a C program to print all natural numbers in reverse from n to 1 using for loop. How to print natural numbers in reverse order in C programming. Logic to print natural numbers in reverse for a given range in C program. */

/**
 * C program to all natural numbers in reverse from n to 1
 */

#include <stdio.h>

int main()
{
    int i, start;

    /* Input start range from user */
    printf("Enter starting value: ");
    scanf("%d", &start);

    /*
     * Run loop from 'start' to 1 and
     * decrement 1 in each iteration
     */
    for (i = start; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}