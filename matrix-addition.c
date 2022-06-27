//Date 23th March

#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], sum[10][10], j, i, r, c;
    printf("Enter the numbers of rows and coloumns of the matrix:\n");
    scanf("%d%d", &r, &c);

    // taking the elements of 1st matrix from the user
    printf("Enter the elements of 1st matrix:");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // taking the elements of the 2nd mtrix
    printf("Enter the elements of 2nd matrix:");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Calculating and printing the sum
    printf("The sum of the matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}