#include <stdio.h>
int TriangleChecker(int a, int b, int c);
int main()
{
    int edge1, edge2, edge3, result;
    printf("Enter Three Edges of Your Triangle\n");
    scanf("%d%d%d", &edge1, &edge2, &edge3);
    result = TriangleChecker(edge1, edge2, edge3);
    if (result == 0)
    {
        printf("Invalid Triangle\n");
    }
    else if (result == 1)
    {
        printf("Equilateral\n");
    }
    else if (result == 2)
    {
        printf("Isosceles\n");
    }
    else
    {
        printf("Scalene\n");
    }
    return 0;
}
int TriangleChecker(int a, int b, int c)
{
    if ((a + b > c) && (a + c > b) && (c + b > a))
    {
        if (a == b && b == c)
        {
            return 1;
        }
        else if (a == b || a == c || b == c)
        {
            return 2;
        }
        else
        {
            return 3;
        }
    }
    else
    {
        return 0;
    }
}