#include <stdio.h>
int main()
{
    int count = 0, n;
    scanf("%d", &n);
    do
    {

        n = n / 10;
        count++;

    }

    while (n != 0);
    printf("Total Digit : %d", count);

    return 0;
}