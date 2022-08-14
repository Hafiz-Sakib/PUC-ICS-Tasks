/* Write  a C Program that takes 10 integer numbers as input and displays the average of the even numbers among those 10 numbers */

#include <stdio.h>
int main()
{
    int i, x, sum = 0, count = 0;
    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            count++;
            sum = sum + x;
        }
    }
    float average;
    average = sum * 1.0 / count;
    printf("%.2f", average);
    return 0;
}