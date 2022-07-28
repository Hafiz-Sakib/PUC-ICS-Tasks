#include <stdio.h>
int validator(int a, int b, int c);
int main()
{
    int edge1, edge2, edge3;
    printf("Enter 3 Edges for Validate: \n");
    scanf("%d%d%d", &edge1, &edge2, &edge3);
    if (validator(edge1, edge2, edge3))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    return 0;
}
int validator(int a, int b, int c)
{
    if ((a + b > c) && (a + c > b) && (c + b > a))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}