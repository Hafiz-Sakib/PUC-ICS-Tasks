/* In this program user is asked to enter the age and based on the input, the
if..else statement checks whether the entered age is greater than or equal to
18. If this condition meets then display the message “You are eligible for
voting”, however, if the condition doesn’t meet then show a different message
“You are not eligible for voting”.*/
#include <stdio.h>
int main()
{
    int age;
    printf("Enter Your Age : \n");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You are  eligible for voting");
    }
    else
    {
        printf("You are not eligible for voting");
    }
    return 0;
}