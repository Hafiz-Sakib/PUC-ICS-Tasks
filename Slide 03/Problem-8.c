/* Write a C program to take three integer numbers (x, y and z) as input and display the
medium one.

For more clarification, check sample input/output. */
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three Integer Numbers\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a >= b)
    {
        if (b >= c)
        {
            // a >= b >= c so
            /* max = a;
            med = b;
            min = c; */
            printf("%d\n", b);
        }
        else if (a >= c)
        {   // a >= c > b
            /*  max = a;
             med = c;
             min = b; */
            printf("%d\n", c);
        }
        else
        { // c > a > b
            /* max = c;
            med = a;
            min = b; */
            printf("%d\n", a);
        }
    }
    else if (a >= c)
    {   // b > a >= c
        /*  max = b;
         med = a;
         min = c; */
        printf("%d\n", a);
    }
    else if (b >= c)
    { // b >= c > a
        /* max =  b;
        med = c;
        min = a;  */
        printf("%d\n", c);
    }
    else
    {   // a < b < c
        /*  max = c;
         med = b;
         min = a; */
        printf("%d\n", b);
    }

    return 0;
}