//Date: 2nd June

#include <stdio.h>
#include <math.h>

int main()
{
    int i, n;
    float av, var, sd, s1 = 0, s2 = 0, x[20];
    printf("Enter the number of data n:\n");
    scanf("%d", &n);
    printf("Enter the data x[i]\n:");
    for (i = 1; i <= n; i++){
        scanf("%f", &x[i]);
    }
    for (i = 1; i <= n; i++)
    {
        s1 = s1 + x[i];
        s2 = s2 + x[i] * x[i];
    }
    av = s1 / n;
    var = s2 / n - av * av;
    sd = sqrt(s2 / n - av * av);
    printf("\n Mean=%5.2f", av);
    printf("\n Variance=%5.2f", var);
    printf("\n S.D. =%5.2f", sd);
    return 0;
}