/* Example-13: C program to enter student marks and find percentage and grade
A college has the following rules for the grading system:

1. Below 25 – F
2. 25 to 45 – E
3. 45 to 50 – D
4. 50 to 60 – C
5. 60 to 80 – B
6. Above 80 – A

Ask the user to enter the mark of 5 subjects and print the corresponding grade. */

#include <stdio.h>
int main(void)
{
    float subMark[5] = {0};
    float per = 0.0;
    int i = 0;
    float sum = 0.0;
    /* Get subject Marks from user */
    for (i = 0; i < 5; i++)
    {
        printf("\n Enter subject %d marks: ", i);
        scanf("%f", &subMark[i]);
        // check validty of marks
        if (subMark[i] > 100)
        {
            printf("\n Enter valid number ! \n");
            i--;
        }
        else
            sum += subMark[i];
    }
    /* total marks */
    printf("\n total marks = %f\n", sum);
    /* Calculate percentage */
    per = (sum / 500.0) * 100;
    printf("\n Percentage = %.2f\n", per);
    /*Grade according to the percentage */
    if (per >= 80)
    {
        printf("\n Grade A");
    }
    else if (per >= 60)
    {
        printf("\n Grade B");
    }
    else if (per >= 50)
    {
        printf("Grade C");
    }
    else if (per >= 45)
    {
        printf("\n Grade D");
    }
    else if (per >= 25)
    {
        printf("\n Grade E");
    }
    else
    {
        printf("\n Grade F");
    }
    return 0;
}