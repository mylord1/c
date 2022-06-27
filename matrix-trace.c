//Date: 24th March

#include <stdio.h>
int main()
{
    int a[10][10], r, c, trace = 0;

    // taking the matrix-order from user
    printf("Enter the numbers of rows and coloumns of the matrix:\n");
    scanf("%d%d", &r, &c);

    // condition for square matrix
    if (r == c)
    {
        // taking elements of the matrix
        printf("Enter the elements of the matrix:\n");
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        // printing the matrix
        printf("The given matrix is:\n");
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }

        // calculating trace
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    trace = trace + a[i][j];
                }
            }
        }
        printf("The trace of the matrix is: %d\n", trace);
    }

    // condition for non-square matrix
    else
    {
        printf("Not a square matrix, can't find trace.\n");
    }
    return 0;
}