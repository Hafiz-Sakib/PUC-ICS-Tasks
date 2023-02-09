/* Write a program in C to swap two numbers using function */
#include <stdio.h>
void swapping(int num1, int num2);
int main()
{
    int a, b;
    printf("Enter 2 Numbers\n");
    scanf("%d%d", &a, &b);
    swapping(a, b);

    return 0;
}
void swapping(int num1, int num2)
{
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("%d\t%d", num1, num2);
}
