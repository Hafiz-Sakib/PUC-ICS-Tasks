/* Write a C Program that takes the height (in cm) of 8 Students in Your Class and Displayes the Tallest Ones */
#include <stdio.h>
#include <limits.h>
int main()
{
    int n = 8, i;
    float tallest = 0, x;
    for (i = 1; i <= 8; i++)
    {
        scanf("%f", &x);
        if (x < 0)
        {
            printf("Height Can't be negative\n");
            break;
        }
        else if (x > tallest)
        {
            tallest = x;
        }
    }
    printf("%f", tallest);
    return 0;
}