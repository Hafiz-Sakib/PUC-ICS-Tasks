/**
 * C program to check whether a triangle is valid or not if its sides are given
 */

#include <stdio.h>

int main()
{
    int side1, side2, side3;

    /* Input three sides of a triangle */
    printf("Enter three sides of triangle: \n");
    scanf("%d%d%d", &side1, &side2, &side3);

    if ((side1 + side2) > side3)
    {
        if ((side2 + side3) > side1)
        {
            if ((side1 + side3) > side2)
            {
                /*
                 * If side1 + side2 > side3 and
                 *    side2 + side3 > side1 and
                 *    side1 + side3 > side2 then
                 * the triangle is valid.
                 */
                printf("Triangle is valid.");
            }
            else
            {
                printf("Triangle is not valid.");
            }
        }
        else
        {
            printf("Triangle is not valid.");
        }
    }
    else
    {
        printf("Triangle is not valid.");
    }

    return 0;
}