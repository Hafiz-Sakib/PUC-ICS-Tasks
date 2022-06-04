// Write a program that takes two numbers (a and b) as input and swaps those two numbers.

// Here, 1 <= a,b <= 109


// SWAP USING THIRD VARIBLE
#include <stdio.h> 
int main()
{
int a, b, temporaryVariable; 
printf("Enter two integersn");
scanf("%d%d", &a, &b);
printf("Before Swappingn First variable = %d \n Second variable = %d\n", a, b);
temporaryVariable = a;
a = b;
b = temporaryVariable;
printf("After Swappingn First variable = %d\n Second variable = %d\n", a, b);
return 0;
}