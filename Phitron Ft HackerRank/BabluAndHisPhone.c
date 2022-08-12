#include <stdio.h>
int main()
{
    int T, X, i, M;

    scanf("%d", &T);
    for (i = 1; i <= T; i++)
    {
        scanf("%d", &X);
        if (X < 60)
        {
            M = 60 - X;
            X = M + X;
            if (X >= 60 && X < 80)
            {
                M = M + ((80 - X) * 2); // M = 65
                X = M + (M - X);        // 80 আসা উচিত

                if (X >= 80 && X < 100)
                {
                    M = M + ((80 - X) * 2);
                }
            }
        }
    }
    printf("%d", M);

    return 0;
}