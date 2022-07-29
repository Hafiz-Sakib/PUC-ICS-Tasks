#include <stdio.h>
int main()
{
    char upperCase, LowerCase;
    int asciiValueofLowerCase;
    printf("Enter a Capital letter to Convert\n");
    scanf("%c", &upperCase);
    asciiValueofLowerCase = upperCase + 32;
    printf("UpperCase : %c\n", upperCase);
    printf("LowerCase : %c\n", asciiValueofLowerCase);

    return 0;
}