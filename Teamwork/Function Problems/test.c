#include <stdio.h>

int Triangle(int a, int b, int c);

int main()
{

    int x, y, z;

    scanf("%d %d %d", &x, &y, &z);

    if (Triangle(x, y, z))
    {

        printf("True");
    }

    else
        printf("False");
}

int Triangle(int a, int b, int c)
{

    if (a + b >= c && a + c >= b && b + c >= a)
    {

        return 1;
    }

    else
        return 0;
}