#include <stdio.h>
int main()
{
    int k, f1 = 1, f2 = 1;
    printf("input a positive number");
    scanf("%d", &k);
    int F[k];

    if (k <= 2 && k >= 0)
    {
        F[0] = f1;
        F[1] = f2;
        for (int i = 0; i <= k - 1; i++)
        {
            printf("%10d", F[i]);
        }
    }

    if (k >= 3)
    {
        F[0] = f1;
        F[1] = f2;
        for (int j = 2; j <= k - 1; j++)
        {
            F[j] = F[j - 1] + F[j - 2];
        }
        for (int i = 0; i <= k - 1; i++)
        {
            printf("%10d", F[i]);
        }
    }
    return 0;
}