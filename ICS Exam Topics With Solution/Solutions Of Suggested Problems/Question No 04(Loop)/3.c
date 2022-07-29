/* Write a C program to print alphabets from a to z using for loop. How to print alphabets using loop in C programming. Logic to print alphabets from a to z using for loop in C programming. */
#include <stdio.h>
int main()
{
    int i = 97;
    // for (i = 97; i < 123; i++)
    // {
    //     printf("%c\n", i);
    // }
    while (i < 123)
    {
        printf("%c\n", i);
        i++;
    }
    return 0;
}