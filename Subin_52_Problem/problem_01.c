#include <stdio.h>
int main()
{
    int a;
    printf("Enter a Integer Number\n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is a even number\n", a);
    }
    else
    {
        printf("%d is a odd number\n", a);
    }
    return 0;
}