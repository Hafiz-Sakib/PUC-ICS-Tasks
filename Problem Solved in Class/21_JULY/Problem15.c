#include <stdio.h>
int main()
{
    int a;
    printf("Enter a Integer Value : \n");
    scanf("%d", &a);
    if (a % 2 == 1)
    {
        printf("Total %d odd numbers are in here", ((a / 2) + 1));
    }
    else
    {
        printf("Total %d odd numbers are in here", (a / 2));
    }
    getch();
    return 0;
}