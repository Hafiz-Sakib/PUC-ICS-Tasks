#include <stdio.h>
int main()
{
    int i, amountOfNumber, sum = 0, initialValue;
    float average;
    printf("Enter the amount How many numbers you want to average : \n");
    scanf("%d", &amountOfNumber);
    for (i = 1; i <= amountOfNumber; i++)
    {
        printf("Enter %d  No Number : \n", i);
        scanf("%d", &initialValue);

        sum = sum + initialValue;
    }
    average = sum * 1.0 / amountOfNumber;
    printf("%.2f\n", average);

    return 0;
}