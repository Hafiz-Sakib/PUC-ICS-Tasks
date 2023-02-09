#include <stdio.h>
int main()
{
    int i, b = 10;
    for (i = 1; i <= 100; i++)
    {
        b = i++;
        printf("%d\n", b);
    }

    return 0;
}
/* #include <stdio.h>
int main()
{
    int a = 5, b;
    b = a++;
    printf("%d\n", b);
    printf("%d\n", a);
    return 0;
} */