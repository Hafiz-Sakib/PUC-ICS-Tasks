/*  C program to enter student marks and find percentages and grade
A college has the following rules for the grading system:
Below 25 – F
25 to 45 – E
45 to 50 – D
50 to 60 – C
60 to 80 – B
Above 80 – A
 */
#include <stdio.h>
int main()
{
    int examMark;
    printf("Enter the mark of your exam \n");
    scanf("%d", &examMark);
    if (examMark < 0 || examMark > 100)
    {
        printf("You entered a wrong number");
    }
    else if (examMark > 80)
    {
        printf("Your Grade is A");
    }
    else if (examMark > 60)
    {
        printf("Your Grade is B");
    }
    else if (examMark > 50)
    {
        printf("Your Grade is C");
    }
    else if (examMark > 45)
    {
        printf("Your Grade is D");
    }
    else if (examMark > 25)
    {
        printf("Your Grade is E");
    }

    else
    {
        printf("tumi fail");
    }
    return 0;
}