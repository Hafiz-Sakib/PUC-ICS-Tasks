/*Write a C program to take three integer numbers (x, y and z) as input and display the
smallest one.

For more clarification, check sample input/output. */
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three Integer Numbers\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a < b && a < c)
    {
        printf("%d\n", a);
    }
    else if (b < a && b < c)
    {
        printf("%d\n", b);
    }

    else
    {
        printf("%d\n", c);
    }
    return 0;
}