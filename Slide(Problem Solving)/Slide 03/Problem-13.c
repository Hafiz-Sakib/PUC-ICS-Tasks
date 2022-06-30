/* Given an integer n as input, calculate the sum up to n-th natural number. (e.g. 1+2+3+ …
… … +n)

Here 1<= x <= 100000
. */
#include <stdio.h>
int main()
{
    int n = 40;                                         // declare & initialize local variable n.
    int sum = (n * (n + 1)) / 2;                        /* define the mathematical formula to calculate the sum of given number. */
    printf("Sum of %d natural number is = %d", n, sum); // print the sum of natural number.
    return 0;
}