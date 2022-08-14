/* Write a function that takes two integer numbers (a and b) as parameters and points the odd numbers between that range reverse way.Here a < b. */
#include <stdio.h>
void PointingOddNumbers(int a, int b);
int main()
{
    // শুধুমাত্র ফাংশনটা লিখতে বলা হয়েছে প্রশ্নে কিন্তু আমি বুঝার সুবিধার্থে পুরো প্রোগ্রাম লিখলাম

    int a, b, ans;
    scanf("%d%d", &a, &b);
    PointingOddNumbers(a, b);

    return 0;
}

void PointingOddNumbers(int a, int b)
{
    int i;
    for (i = b; i >= a; i--)
    {
        if (i % 2 != 0)
        {
            printf("%d\t", i);
        }
    }
}