/* Given the value of three edges(a, b and c) of a triangle, determine whether the triangle is
right angled or not.

For more clarification, check sample input/output. */
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three Edges of traingle\n");
    scanf("%d%d%d", &a, &b, &c);
    if ((a + b > c) && (b + c > a) && (c + a > b))
    {
        if ((a * a) + (b * b) == (c * c) || (b * b) + (c * c) == (a * a) || (c * c) + (a * a) == (b * b))
        {
            printf("This is a right triangle\n");
        }
        else
        {
            printf("This is triangle but not a right triangle\n");
        }
    }
    else
    {
        printf("Not even a traingle\n");
    }

    return 0;
}