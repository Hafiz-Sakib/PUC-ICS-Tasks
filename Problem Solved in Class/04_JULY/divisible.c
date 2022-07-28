#include <stdio.h>
int divisibleCheker(int number);
int main()
{
    int a, r;
    printf("Enter a Number\n");
    scanf("%d", &a);
    r = divisibleCheker(a);
    if (r == 1)
    {
        printf("Divisible\n");
    }
    else if (r == 0)
    {
        printf("Indivisible\n");
    }

    return 0;
}
int divisibleCheker(int number)
{
    if (number % 5 == 0 && number % 11 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}