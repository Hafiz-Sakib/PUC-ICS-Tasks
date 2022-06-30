#include <stdio.h>
int sum(int num1, int num2);
int main()
{
    int a, b, c;
    printf("Enter two Integer Numbers\n");
    scanf("%d%d", &a, &b);
    c = sum(a, b);
    printf("Sum of Your Inputs is %d", c);

    return 0;
}
int sum(int num1, int num2)
{
    int s;
    s = num1 + num2;
    return s;
}
