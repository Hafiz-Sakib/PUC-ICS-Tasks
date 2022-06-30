/*
Write a C program that takes a character as input and determines whether it is a vowel or consonant or other symbols.
For more clarification, check sample input/output.
 */

// Symbol (32 -47) (58 - 64) (123 - 255)ASCII value

#include <stdio.h>
int main()
{
    char input;
    printf("Your Input: \n");

    scanf("%c", &input);

    // input >= 65

    if (65 <= input && input <= 90 || 97 <= input && input <= 122)
    {

        printf("This is a Alphabet\n");
    }

    else if (48 <= input && input <= 57)
    {
        printf("This is a Number\n");
    }

    else
    {
        printf("This is Symbol\n");
    }
    return 0;
}
