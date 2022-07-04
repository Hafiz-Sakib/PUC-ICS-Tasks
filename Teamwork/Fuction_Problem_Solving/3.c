#include <stdio.h>

#include <stdbool.h>

int main()
{

    bool t = 1;

    bool f = 0;

    int a;

    printf("Enter any number within 0-5: ");

    scanf("%d", &a);

    if (a < 6)
    {

        printf("It is true or %d", t);
    }

    else
    {

        printf("It is false or %d", f);
    }

    return 0;
}