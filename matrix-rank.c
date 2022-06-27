// Date 28th March

#include <stdio.h>
int main()
{
    int a[2][2], i, j;
    long determinant;

    // taking the elements of 2X2 matrix
    printf("Enter the elements of 2X2 matrix: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // calculating the determinant
    determinant = a[0][0] * a[1][1] - a[0][1] * a[1][0];

    // rank condition
    if (determinant == 0)
    {
        printf("The rank of the given matrix is 1.\n");
    }
    else
    {
        printf("The rank of the given matrix is 2.\n");
    }
    return 0;
}