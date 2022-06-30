/* Write a C program to take three integer numbers (x, y and z) as input and display the
medium one.

For more clarification, check sample input/output. */

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three Integer Numbers\n");
    scanf("%d%d%d", &a, &b, &c);

    // Checking for b

    if ((a < b && b < c) || (c < b && b < a))

    {
        printf("%d\n", b);
    }

    // Checking for a

    else if ((b < a && a < c) || (c < a && a < b))
    {
        printf("%d\n", a);
    }

    else
    {
        printf("%d\n", c);
    }

    return 0;
}