/*
Given a year as input, determine whether the year is leap year or not.

For more clarification, check sample input/output.
 */
#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year:\n");
    scanf("%d", &year);

    if ((year % 400 == 0) && (year % 100 != 0) && year % 4 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else
    {
        printf("%d is not a leap year.", year);
    }
    return 0;
}

// This problem is unfinished