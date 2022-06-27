// Date: 2nd June

#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, n;
    float median, x[100], t;
    printf("Enter the number of items\n");
    scanf("%d", &n);
    printf("Enter the %d values\n:", n);
    for (i = 1; i <= n; i++)
    {
        scanf("%f", &x[i]);
    }
    for (i = 1; i <= n - 1; i++)
    {
        for (j = 1; j <= n - 1; j++)
        {
            if (x[j] <= x[j + 1])
            {
                t = x[j];
                x[j] = x[j + 1];
                x[j + 1] = t;
            }
            else
            {
                continue;
            }
        }
    }
    if (n % 2 == 0)
    {
        median = (x[n / 2] + x[n / 2 + 1]) / 2.0;
    }
    else
    {
        median = x[n / 2 + 1];
    }
    for (i = 1; i <= n; i++)
    {
        printf("%.2f", x[i]);
    }
    printf("\n Median is %f", median);
    return 0;
}