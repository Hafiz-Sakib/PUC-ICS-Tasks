/*
Write a C program to find maximum and minimum between two numbers using functions.
Write a C program to check whether a number is even or odd using functions. */

/* Write a C program to find cube of any number using function */
#include <stdio.h>
#include <math.h>
int qube(int input);
int main()
{
    int input;
    scanf("%d", &input);
    int qubicAns;
    qubicAns = qube(input);
    printf("%d", qubicAns);

    return 0;
}

int qube(int input)
{
    int ans;
    ans = cbrt(input);
    return ans;
}