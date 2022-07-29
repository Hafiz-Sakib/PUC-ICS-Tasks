/**
 Given an integer number as input, print the number of total even numbers in between 0 to n
(inclusive).

Here, 1 <= n <= 109
 */

#include <stdio.h>

int main()
{
    int i, n;

    /* Input upper limit of even number from user */
    printf("Print all even numbers till: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are: \n", n);

    /*
     * Start loop counter from 1, increment it by 1,
     * will iterate till n
     */
    for (i = 1; i <= n; i++)
    {
        /* Check even condition before printing */
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}