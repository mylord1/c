// Date: 19th April

/*Program for Lagrange Interpolation formula*/
#include <stdio.h>

int main()
{
    float x[10], y[10], X, v, val = 0;
    int i, j, n;
    printf("Number of arguments\n");
    scanf("%d", &n);
    printf("Enter the values of x and f(x)\n");
    printf("x\t\tf(x)\n");
    for (i = 1; i <= n; i++)
    {
        scanf("%f\t%f", &x[i], &y[i]);
    }
    printf("Value of x where the functional value is to be determined\n");
    scanf("%f", &X);
    for (i = 1; i <= n; i++)
    {
        v = y[i];
        for (j = 1; j <= n; j++)
        {
            if (j != i)
            {
                v = v * (X - x[j]) / (x[i] - x[j]);
            }
        }
        val = val + v;
    }
    printf("The value of f(%3.2f)=%5.3f", X, val);
    return 0;
}