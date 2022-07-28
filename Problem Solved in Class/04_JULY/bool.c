#include <stdio.h>
#include <stdbool.h>
bool divisibleCheker(int number);
int main()
{
    int a;
    bool r;
    printf("Enter a Number\n");
    scanf("%d", &a);
    r = divisibleCheker(a);
    if (r == true)
    {
        printf("Divisible\n");
    }
    else if (r == false)
    {
        printf("Indivisible\n");
    }

    return 0;
}
bool divisibleCheker(int number)
{
    if (number % 5 == 0 && number % 11 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}