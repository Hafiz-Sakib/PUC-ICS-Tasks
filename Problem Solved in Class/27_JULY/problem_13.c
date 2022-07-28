/* Given an integer n as input, calculate the sum up to n-th natural number. (e.g. 1+2+3+ …
… … +n)

Here 1<= x <= 100000
. */
#include <stdio.h>
int main()
{
    long long int n, sum;
    printf("Enter a natural number\n");
    scanf("%lld", &n);

    sum = (n * (n + 1)) / 2;

    printf("Sum of natural number is %lld", sum);

    return 0;
}