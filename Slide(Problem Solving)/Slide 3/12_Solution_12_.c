/* Given a character as input, identify the character as alphabet, number or others.

For more clarification, check sample input/output. */

#include <stdio.h>
int main()
{
    char userInput;

    printf("Input a character: ");
    scanf("%c", &userInput);

    /* Checks whether it is an alphabet */
    if ((userInput >= 'a' && userInput <= 'z') || (userInput >= 'A' && userInput <= 'Z'))
    {
        printf("This is an alphabet.\n");
    }
    else if (userInput >= '0' && userInput <= '9') /* whether it is digit */
    {
        printf("This is a digit.\n");
    }
    else /* Else special character */
    {
        printf("This is a special character.\n");
    }
}