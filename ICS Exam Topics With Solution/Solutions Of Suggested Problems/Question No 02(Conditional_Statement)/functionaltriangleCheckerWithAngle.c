#include <stdio.h>
int triangleCheckerWithAngle(int a, int b, int c);
int main()
{
    int angle1, angle2, angle3, result;
    printf("Enter Three Angle o the Triangle:\n");
    scanf("%d%d%d", &angle1, &angle2, &angle3);
    result = triangleCheckerWithAngle(angle1, angle2, angle3);
    if (result == 1)
    {
        printf("Valid Triangle\n");
    }
    else if (result == 0)
    {
        printf("InValid Triangle\n");
    }
    return 0;
}
int triangleCheckerWithAngle(int a, int b, int c)
{
    if (a + b + c == 180 && a != 0 && b != 0 && c != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}