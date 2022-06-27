// Date: June 17

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define zero 0.00001

int main()
{
    int n, m, k, i, j;
    float a[10][10], temp;
    printf("\nEnter the size/order of the matrix: ");
    scanf("%d", &n);

    // taking the elements of the matrix
    printf("Enter the elements row-wise:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%f", &a[j][j]);
        }
    }

    // argument of the matrix
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            a[j][n + j] = 0;
        }
    }

    for (i = 1; i <= n; i++)
    {
        a[j][n + i] = 1;
    }
    m = 2 * n;

    for (k = 1; k <= n; k++)
    {
        // find pivot element and its position
        temp = fabs(a[k][k]);
        j = k;

        for (i = k + 1; i <= n; i++)
        {
            if (temp < fabs(a[i][k]))
            {
                temp = fabs(a[i][k]);
                j = 1;
            }
            if (fabs(a[j][k] <= zero))
            {
                printf("the matrix is singular and it's not invertible");
                exit(0);
            }
            if (j != k)
            {
                for (i = 1; i <= m; i++)
                {
                    temp = a[j][i];
                    a[j][i] = a[k][i]; // marking
                    a[k][i] = temp;
                }
            }
            if (a[k][k] != 1)
            {
                temp = a[k][k];
                for (i = 1; i <= m; i++)
                {
                    a[k][i] /= temp;
                }
            }
            for (j = k + 1; j <= n; j++)
            {
                temp = a[j][k];
                for (i = 1; i <= m; i++)
                {
                    a[j][i] -= temp * a[k][i];
                }
            }
        }
    }

    for (k = 2; k <= n; k++)
    {
        for (j = k - 1; j >= 1; j--)
        {
            temp = a[j][k];
            for (i = 1; i <= m; i++)
            {
                a[j][i] -= temp * a[k][i];
            }
        }
    }

    printf("\n The inverse matrix is: \n");
    for (i = 1; i <= n; i++)
    {
        for (j = n + 1; j <= m; j++)
        {
            printf("%f\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}