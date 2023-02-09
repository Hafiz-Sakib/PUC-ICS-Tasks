/* Write a function that will take two integer numbers as parameter and returns the
bigger one. */
#include <stdio.h>
int FindBiggerNumber(int x, int y);
int main()
{
    int a, b, bigger;
    printf("Enter Two Numbers For Identify the Bigger One : \n");
    scanf("%d%d", &a, &b);
    bigger = FindBiggerNumber(a, b);
    printf("%d is The Bigger Number\n", bigger);

    return 0;
}

int FindBiggerNumber(int x, int y)
{
    int max;

    if (x > y)
    {
        max = x;
    }
    else
    {
        max = y;
    }
    return max;
}