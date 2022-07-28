#include <stdio.h>
int main()
{
    char input;
    printf("Your Input: \n");

    scanf("%c", &input);

    if (65 <= input && input <= 90)
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
}