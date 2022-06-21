/*
Write a C program that takes a character as input and determines whether it is a vowel or consonant.
For more clarification, check sample input/output.
 */
#include <stdio.h>

int main()
{
    char letter;
    printf("Enter Any character: \n");

    scanf("%c", &letter);

    if (letter == 'a' || letter == 'e' || letter == 'u' || letter == 'i' || letter == 'o' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
    {
        printf("%c is Vowel", letter);
    }
    else
    {
        printf("%c is Consonent", letter);
    }
    return 0;
}