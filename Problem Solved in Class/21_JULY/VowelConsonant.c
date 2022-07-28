
#include <stdio.h>

int main()
{
    char letter;
    printf("Enter Any character: \n");

    scanf("%c", &letter);

    if (letter == 'a' || letter == 'e' || letter == 'u' || letter == 'i' || letter == 'o' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
    {
        printf("%c is Vowel\n", letter);
    }
    else
    {
        printf("%c is Consonent\n", letter);
    }
    return 0;
}