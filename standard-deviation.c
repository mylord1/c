// Date: 3rd June

#include <stdio.h>
#include <math.h>

int main()
{
    int i, n, s3 = 0, f[100];
    float av, var, sd, s1 = 0, s2 = 0, x[20];
    printf("Enter the number of data n:\n");
    scanf("%d", &n);
    printf("Enter the data x[i]\n:");
    for (i = 1; i <= n; i++)
    {
        scanf("%f", &x[i]);
    }
    printf("Enter the corresponding frequencies f[i]\n:");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &f[i]);
    }
    for (i = 1; i <= n; i++)
    {
        s1 = s1 + x[i] * f[i];
        s2 = s2 + x[i] * x[i] * f[i];
        s3 = s3 + f[i];
    }
    av = s1 / (float)s3;
    var = s2 / (float)s3 - av * av;
    sd = sqrt(var);
    printf("\n Mean=%5.2f", av);
    printf("\n Variance=%5.2f", var);
    printf("\n S.D. =%5.2f", sd);
    return 0;
}