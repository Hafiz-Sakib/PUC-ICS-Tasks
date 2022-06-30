/* C program to convert temperature from Fahrenheit to Celsius and Celsius to Fahrenheit
The basic formula to convert Fahrenheit and Celsius to each other.
Celsius to Fahrenheit: (°C × 9/5) + 32 = °F
Fahrenheit to Celsius: (°F − 32) x 5/9 = °C */

#include <stdio.h>
int main()
{
    float fh, cl;
    char ch;
    printf("\n\n Press c to convert temperature from Fahrenheit to Celsius.");
    printf("\n\n Press f to convert temperature from Celsius to Fahrenheit.");
    printf("\n\n Enter your choice (c, f): ");
    scanf("%c", &ch);
    if ((ch == 'c') || (ch == 'C'))
    {
        printf("\n\nEnter temperature in Fahrenheit: ");
        scanf("%f", &fh);
        cl = (fh - 32) / 1.8;
        printf("\n\nTemperature in Celsius: %.2f\n\n", cl);
    }
    else if ((ch == 'f') || (ch == 'F'))
    {
        printf("\n\nEnter temperature in Celsius: ");
        scanf("%f", &cl);
        fh = (cl * 1.8) + 32;
        printf("\n\nTemperature in Fahrenheit: %.2f\n\n", fh);
    }
    else
    {
        printf("\n\nInvalid Choice !!!\n\n");
    }
    return 0;
}
