#include <stdio.h>
int oddOREven(int input);
int main()
{
    int input, result;
    scanf("%d", &input);
    result = oddOREven(input);
    if (result == 156)
    {
        printf("%d is a even Number\n", input);
    }
    else if (result == 20)
    {
        printf("%d is a Odd Number\n", input);
    }

    return 0;
}
int oddOREven(int input)
{
    if (input % 2 == 0)
    {
        return 156;
    }
    else
    {
        return 20;
    }
}