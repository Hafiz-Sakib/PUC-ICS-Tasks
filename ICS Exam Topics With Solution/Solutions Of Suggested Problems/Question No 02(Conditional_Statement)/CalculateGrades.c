/* Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer, calculate percentage and grade according to given conditions:
If percentage >= 90% : Grade A
If percentage >= 80% : Grade B
If percentage >= 70% : Grade C
If percentage >= 60% : Grade D
If percentage >= 40% : Grade E
If percentage < 40% : Grade F

Example
Input
Input marks of five subjects: 95
95
97
98
90
Output

Percentage = 95.00
Grade A */

/**
 * C program to enter marks of five subjects and find percentage and grade
 */

#include <stdio.h>

int main()
{
    int phy, chem, bio, math, comp;
    float per;

    /* Input marks of five subjects from user */
    printf("Enter five subjects marks: ");
    scanf("%d%d%d%d%d", &phy, &chem, &bio, &math, &comp);

    /* Calculate percentage */
    per = (phy + chem + bio + math + comp) / 5.0;

    printf("Percentage = %.2f\n", per);

    /* Find grade according to the percentage */
    if (per >= 90)
    {
        printf("Grade A");
    }
    else if (per >= 80)
    {
        printf("Grade B");
    }
    else if (per >= 70)
    {
        printf("Grade C");
    }
    else if (per >= 60)
    {
        printf("Grade D");
    }
    else if (per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}