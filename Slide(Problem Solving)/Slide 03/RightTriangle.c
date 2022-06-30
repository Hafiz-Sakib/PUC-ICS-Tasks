#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Enter the three edges :");
    scanf("%f %f %f", &a, &b, &c);

    if ((a * a) + (b * b) == (c * c) || (b * b) + (c * c) == (a * a) || (c * c) + (a * a) == (b * b))
    {
        printf("This Triangle is Right.");
    }
    else
    {
        printf("This Triangle isn,t Right.");
    }

    return 0;
}

// this problem is unfinished