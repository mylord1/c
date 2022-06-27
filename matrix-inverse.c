#include <stdio.h>

int main()
{
    int matrix[2][2], adj_matrix[2][2];
    int i, j;
    float inv_matrix[2][2], det;
    printf("Enter elements for 2 * 2 matrix\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // printing the matrix
    printf("Matrix A is\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    /* Calculate determinant of matrix A */
    det = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    if (det == 0)
    {
        printf("Inverse of this Matrix cannot be found! (Determinant is zero)");
        return 0;
    }

    /* Find adjoint of matrix A */
    adj_matrix[0][0] = matrix[1][1];
    adj_matrix[1][1] = matrix[0][0];
    adj_matrix[0][1] = -matrix[0][1];
    adj_matrix[1][0] = -matrix[1][0];

    /* Find Inverse of A */
    printf("Inverse of Matrix A is\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            inv_matrix[i][j] = (adj_matrix[i][j]) / det;
            printf("%.1f\t", inv_matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}