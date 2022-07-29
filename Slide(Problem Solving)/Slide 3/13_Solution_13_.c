#include <stdio.h>
int main()
{
    long long n, sum;
    printf("Emter the natural Number: \n");
    scanf("%lld", &n);

    sum = (n * (n + 1) / 2);
    printf("Sum of natural Number is %lld\n", sum);

    return 0;
}