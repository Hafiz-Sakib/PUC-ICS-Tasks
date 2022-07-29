/* Write a C program to read roll no, name, and marks of three subjects and
calculate the total, percentage, and division:
● Input the Roll Number of the student:784.
● Input the Name of the Student: James.
● Input the marks of Physics, Chemistry and Computer Application: 70
80 90


80-100 => 1st Division
60-80 => 2nd Division
40-60 => 3rd Division
Perchantage < 40 = Fail

Expected Output :
● Roll No: 784,
● Name of Student: James,
● Marks in Physics: 70,
● Marks in Chemistry: 80,
● Marks in Computer Application: 90,
● Total Marks = 240,
● Percentage = 80.00,
● Division = First
 */

#include <stdio.h>
int main()
{
    int roll, physics, chemestry, ICT, Total;
    float Perchantage;
    char name[26]; // 26 means character size
    printf("Enter Your Roll Number : \n");
    scanf("%d", &roll);
    printf("Enter Your Name : \n");
    scanf("%s", &name); //%s for string Inputs
    printf("Enter Your Physics Marks :\n");
    scanf("%d", &physics);
    printf("Enter Your chemestry Marks :\n");
    scanf("%d", &chemestry);
    printf("Enter Your ICT Marks :\n");
    scanf("%d", &ICT);

    Total = physics + chemestry + ICT;
    Perchantage = Total / 3.0;

    /* ● Roll No: 784,
    ● Name of Student: James,
    ● Marks in Physics: 70,
    ● Marks in Chemistry: 80,
    ● Marks in Computer Application: 90,
    ● Total Marks = 240,
    ● Percentage = 80.00,
    ● Division = First */
    printf("Roll No %d\n", roll);
    printf("Name of Student: %s\n", name);
    printf("Marks In Physics :%d\n", physics);
    printf("Marks In Chemestry :%d\n", chemestry);
    printf("Marks In ICT :%d\n", ICT);
    printf("Total Marks :%d\n", Total);
    printf("Perchantage :%.2f\n", Perchantage);
    if (Perchantage >= 80)
    {
        printf("Division : First");
    }
    else if (Perchantage >= 60 && Perchantage < 80)
    {
        printf("Division : Second\n");
    }
    else if (Perchantage >= 40 && Perchantage < 60)
    {
        printf("Division : Second\n");
    }
    else
    {
        printf("Fail\n");
    }

    return 0;
}
