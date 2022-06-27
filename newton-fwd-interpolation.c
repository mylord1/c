// Date: 27th April

#include <stdio.h>

int main()
{
    float x[10], y[10], X, p = 1, u, h, val;
    int i, j, n;
    printf("OUTPUT\n");
    printf("Number of arguments\n");
    scanf("%d", &n);
    printf("Enter the values of x and f(x)\n");
    printf("x\t\tf(x)\n");
    for (i = 1; i <= n; i++)
    {
        scanf("%f\t%f", &x[i], &y[i]);
    }
    h = x[2] - x[1];
    printf("Value of x where the functional value is to be determined\n");
    scanf("%f", &X);
    u = (X - x[1]) / h;
    val = y[1];
    for (j = 1; j <= n - 1; j++)
    {
        y[j] = y[j + 1] - y[j];
        p = p * (u - i + 1) / i;
        val = val + p * y[1];
    }
    printf("The value of f(%3.2f)=%6.4f", X, val);
    return 0;
}