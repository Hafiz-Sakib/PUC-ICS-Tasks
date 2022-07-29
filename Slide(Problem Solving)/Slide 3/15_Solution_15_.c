#include <stdio.h>

int main()
{

    int a;
    printf("Enter a integer Number : \n");
    scanf("%d", &a);
    if (a % 2 == 1)
    {
        printf("Total %d odd numbers are in here", ((a / 2) + 1));
    }
    else
    {
        printf("Total %d odd numbers are in here. \n", (a / 2));
    }

    return 0;
}