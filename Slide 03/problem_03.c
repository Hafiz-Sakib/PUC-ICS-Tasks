/*
Write a C program to take two integer number (x and y) as input and display the bigger one.
 */
#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the two number value: \n");
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        printf("%d is Bigger Number.", x);
    }
    else if (x < y)
    {
        printf("%d is Bigger Number.", y);
    }
    return 0;
}