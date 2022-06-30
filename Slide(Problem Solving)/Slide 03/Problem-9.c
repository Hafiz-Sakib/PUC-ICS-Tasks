/* Given the value of three edges(a, b and c), determine whether they can form a triangle or
not.

For more clarification, check sample input/output. */

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three Edges of traingle\n");
    scanf("%d%d%d", &a, &b, &c);
    if ((a + b > c) && (b + c > a) && (c + a > b))
    {
        printf("Can make a traingle\n");
    }
    else
    {
        printf("Can't make a traingle\n");
    }
    return 0;
}