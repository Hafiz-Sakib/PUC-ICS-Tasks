/**
 * C program to check Leap Year
 */

#include <stdio.h>

int main()
{
    int year;

    /* Input year from user */
    printf("Enter year : ");
    scanf("%d", &year);

    /*
     * If year is exactly divisible by 4  and year is not divisible by 100
     * or year is exactly divisible by 400 then
     * the year is leap year.
     * Else year is normal year
     */
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        printf("LEAP YEAR");
    }
    else
    {
        printf("COMMON YEAR");
    }

    return 0;
}