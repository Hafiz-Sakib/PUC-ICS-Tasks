#include <stdio.h>
int main()
{
    // Variable Swap
    int x, y, z;
    printf("Enter X :");
    scanf("%d", &x);
    printf("Enter Y :");
    scanf("%d", &y);
    z = x;
    x = y;
    y = z;
    printf("X is %d: \n", x);
    printf("Y is %d:", y);
    return 0;
}