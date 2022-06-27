//Date 22th March

#include <stdio.h>
int main()
{
	int a[3][3], i, j;
	long determinant;

	// taking the values from user row-wise
	printf("Enter the 9 elements of the matrix:");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	// printing the matrix
	printf("\nThe matrix is:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

	// calculating the determinant
	determinant = (a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1]) - a[0][1] * (a[1][0] * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]));

	// printing the determinant value
	printf("\nDeterminants of 3X3 matrix is: %ld\n", determinant);
	return 0;
}