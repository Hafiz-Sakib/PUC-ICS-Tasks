/* Program to print a number of days in a month
 */

#include <stdio.h>
// Range of year
#define MAX_YR 9999
#define MIN_YR 1900
// Function to check leap year.
// Function returns 1 if leap year
int IsLeapYear(int year)
{
    return (((year % 4 == 0) &&
             (year % 100 != 0)) ||
            (year % 400 == 0));
}
// returns 1 if given date is valid.
int numberDays(int month, int year)
{
    // check range of year
    if (year > MAX_YR ||
        year < MIN_YR)
        return 0;
    // check range of month
    if (month < 1 || month > 12)
        return 0;
    // Handle feb days in leap year
    if (month == 2)
    {
        if (IsLeapYear(year))
            return (29);
        else
            return (28);
    }
    else if (month == 4 || month == 6 || // handle months which has only 30 days
             month == 9 || month == 11)
        return (30);
    return 31;
}
int main(void)
{
    int year = 0;  // variable to store year
    int month = 0; // variable to store month
    int ret = 0;
    printf("\n Enter the year: = ");
    scanf("%d", &year);
    printf("\n Enter the month: = ");
    scanf("%d", &month);
    // check number of days
    ret = numberDays(month, year);
    if (0 == ret)
    {
        printf("\n Enter valid month and year");
        return 0;
    }
    printf("\n Number of days  = %d", ret);
    return 0;
}