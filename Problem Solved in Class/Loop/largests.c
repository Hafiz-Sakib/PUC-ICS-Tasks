#include <stdio.h>

int main()
{
    int limit, num, count, big;

    printf("Enter the limit\n");
    scanf("%d", &limit);

    printf("Enter %d numbers\n", limit);
    for (count = 1; count <= limit; count++)
    {
        scanf("%d", &num);

        if (num > big || count == 1)
        {
            big = num;
        }
    }

    printf("Biggest number is %d\n", big);

    return 0;
}