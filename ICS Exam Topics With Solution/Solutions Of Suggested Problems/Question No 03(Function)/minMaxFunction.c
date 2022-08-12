/* Write a C program to find maximum and minimum between two numbers using functions. */

#include <stdio.h>

int maximum(int num1, int num2);
int minimum(int num1, int num2);
int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    int ans, ans2;
    ans = maximum(num1, num2);
    printf("%d is the max number \n", ans);
    ans2 = minimum(num1, num2);
    printf("%d is the min number \n", ans2);
    return 0;
}

int maximum(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
int minimum(int num1, int num2)
{
    if (num1 > num2)
    {
        return num2;
    }
    else
    {
        return num1;
    }
}