// Date 28th March

#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10], i, j, k, m, n, p;

    // taking the 1st matrix
    printf("Enter the order of the 1st matrix: ");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of the 1st matrix: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // taking the 2nd matrix
    printf("Enter the order of the 2nd matrix: ");
    scanf("%d%d", &n, &p);
    printf("Enter the elements of the 2nd matrix: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // loop to multiply two matrices
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    // printing the result
    printf("\nProduct of two matrix: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("%3d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}