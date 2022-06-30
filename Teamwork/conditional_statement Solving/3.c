/* C program with Conditional statement to convert
temperature from Fahrenheit to Celsius and Celsius
to Fahrenheit */

#include <stdio.h>
// #define fahrenheit (input * 9/5) + 32
// #define celsius (input - 32) * 5/9

int main()
{
    char input;
    float result, temp;
    printf("Press c for convert fahrenheit to celsius\n");
    printf("Press f for convert celsius to fahrenheit\n");
    printf("Enter your choice (c, f):");
    scanf("%c", &input);

    if (input == 'c' || input == 'C')
    {
        printf("Enter your fahrenheit temperature to convert it on celcius :");
        scanf("%f", &temp);
        result = ((temp - 32) * 5) / 9;
        printf("Your temperature in Celsius = %.3f", result);
    }
    else if (input == 'f' || input == 'F')
    {
        printf("Enter your celcius temperature to convert it on fahrenheit :");
        scanf("%f", &temp);
        result = (temp * 9 / 5) + 32;
        printf("Your Temperature in Fahrenheit = %.3f", result);
    }
    else
    {
        printf("Wrong Input");
    }
    return 0;
}