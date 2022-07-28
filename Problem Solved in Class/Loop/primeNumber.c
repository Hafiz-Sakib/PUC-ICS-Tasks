#include <stdio.h>
int main()
{
    int number, i, count = 0;
    printf("Enter the number to identify it's prime or not\n");
    scanf("%d", &number);
    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("%d is a prime number\n", number);
    }
    else
    {
        printf("%d is not a prime number \n", number);
    }
    return 0;
}