/* (1-10 পর্যন্ত নামতা প্রিন্ট করে দেখাও) */
#include <stdio.h>

/* int main()
{

    int n, i;

    for (n = 1; n <= 10; n++)
    {

        for (i = 1; i <= 10; i++)
        {

            printf("%d X %d = %d\n", n, i, n * i);
        }
        printf("\n");
    }

    return 0;
} */

#include <stdio.h>

int main()
{

    int n, i, j;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= 10; j++)
        {

            printf("%d X %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}