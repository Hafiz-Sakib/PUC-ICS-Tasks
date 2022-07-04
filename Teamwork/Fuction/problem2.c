#include <stdio.h>
int equation(int x, int y);
int main()
{
    int a, b, c;
    printf("Enter two Integer Numbers:");
    scanf("%d%d", &a, &b);
    c = equation(a, b);
    printf("Result of the equation is : %d \n", c);
    return 0;
}

int equation(int x, int y)
{
    int z;
    if ((x >= 48 && x <= 57) && (y >= 48 && y <= 57))
    {
        z = ((2 * x * x) + (y * y) - 3);
    }
    else
    {
        printf("Can't Solve the Equation Because of Wrong Input");
    }
    return z;
}