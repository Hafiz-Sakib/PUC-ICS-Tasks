/**
 * C program to find maximum between three numbers using nested if
 */

#include <stdio.h>

int main()
{
    int num1, num2, num3, max;

    /* Input three numbers from user */
    printf("Enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            /* If num1 > num2 and num1 > num3 */
            max = num1;
        }
        else
        {
            /* If num1 > num2 but num1 > num3 is not true */
            max = num3;
        }
    }
    else
    {
        if (num2 > num3)
        {
            /* If num1 is not > num2 and num2 > num3 */
            max = num2;
        }
        else
        {
            /* If num1 is not > num2 and num2 > num3 */
            max = num3;
        }
    }

    /* Print maximum value */
    printf("Maximum among all three numbers = %d", max);

    return 0;
}