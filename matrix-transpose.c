// Date 23th March

#include <stdio.h>
int main()
{
    int a[10][10], transpose[10][10], j, i, r, c;
    printf("Enter the numbers of rows and coloumns of the matrix:\n");
    scanf("%d%d", &r, &c);

    // taking elements of the matrix
    printf("Enter the elements of the matrix:");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // transpose logic
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    // printing the transpose matrix
    printf("The transpose matrix is: \n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}