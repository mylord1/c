//Date: 22th April

/*Question: Solve the following system of equations by using Gauss Elimination Method.
                3x + 2y + z = 10
                2x + 3y + 2z = 14
                x + 2y + 3x = 14
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float a[10][10], b[10], x[10], u, s;
    int i, j, k, n;
    printf("The order of the matrix is:\n");
    scanf("%d", &n);
    printf("Write the elements of the matrix row wise:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }
    printf("Write the components of the vector b:\n");
    for (j = 1; j <= n; j++)
    {
        scanf("%f", &b[j]);
    }
    for (i = 1; i <= n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            u = a[j][i] / a[i][i];
            for (k = i; k <= n; k++)
            {
                a[j][k] = a[j][k] - u * a[i][k];
            }
            b[j] = b[j] - u * b[i];
        }
    }
    printf("The reduced augmented matrix is:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%4.3f\t", a[i][j]);
        }
        printf("%3.2f", b[i]);
        printf("\n");
    }
    x[n] = b[n] / a[n][n];
    for (i = n - 1; i >= 1; i = i - 1)
    {
        s = 0;
        for (j = i + 1; j <= n; j++)
        {
            s = s + a[i][j] * x[j];
        }
        x[i] = (b[i] - s) / a[i][i];
    }
    printf("The solutions are:\n");
    for (i = 1; i <= n; i++)
    {
        printf("x[%d]=%5.3f\n", i, x[i]);
    }
    return 0;
}

/*OUTPUT: 
The order of the matrix is:
3
Write the elements of the matrix row wise:
3
2
1
2
3
2
1
2
3
Write the components of the vector b:
10
14
14
The reduced augmented matrix is:
3.000   2.000   1.000   10.00
-0.000  1.667   1.333   7.33
-0.000  0.000   1.600   4.80
The solutions are:
x[1]=1.000
x[2]=2.000
x[3]=3.000 */