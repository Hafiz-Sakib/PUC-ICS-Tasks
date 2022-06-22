/* Given a character as input, identify the character as alphabet, number or others.

For more clarification, check sample input/output. */
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