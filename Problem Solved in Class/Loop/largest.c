#include <stdio.h>
int main()
{
    int i, amountOfNumber, maximum = 0, Input;
    printf("Enter the amount How many numbers you want to average : \n");
    scanf("%d", &amountOfNumber);
    for (i = 1; i <= amountOfNumber; i++)
    {
        printf("Enter %d  No Number : \n", i);
        scanf("%d", &Input);

        if (Input > maximum)
        {
            maximum = Input;
        }
    }
    printf("Maximum Number is %d \n", maximum);

    return 0;
}