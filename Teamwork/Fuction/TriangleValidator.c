#include <stdio.h>
void validator(int a, int b, int c);
int main()
{
    int edge1, edge2, edge3;
    printf("Enter 3 Edges for Validate: \n");
    scanf("%d%d%d", &edge1, &edge2, &edge3);
    validator(edge1, edge2, edge3);
    return 0;
}
void validator(int a, int b, int c)
{
    if ((a + b > c) && (a + c > b) && (c + b > a))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}