// Write a C program to take two integer number (x and y) as input and display the output in the given format.

#include <stdio.h>
int main()
{

    // printf("%d + %d = %d", number1, number2, sum); From Programizz

    int a, b, sum;
    // printf("");
    printf("Enter two Numbers : \n");
    scanf("%d%d", &a, &b);
    // int sum;
    printf("%d + %d =%d\n", a, b, sum = a + b);
    printf("%d - %d =%d\n", a, b, sum = a - b);
    printf("%d * %d =%d\n", a, b, sum = a * b);
    printf("%d / %d =%d\n", a, b, sum = a / b);
    printf("%d %% %d =%d\n", a, b, sum = a % b);

    return 0;
}