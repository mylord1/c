// Date 21th March

// Question : Write a program in c to evalutate the integral taking (integration 2 to 3) dx/(1+x) n=4

// Working Formula : h / 3 * (y_0 + y_n + 4*sum of all odd ordinates + 2*sum of all even ordinates)

#include <stdio.h>
#include <math.h>

float f(float x)
{
	return (1 / (1 + x));
}

int main()
{
	int i, n;
	float h, x0, xn, x[20], y[20], sumo, sume, ans;

	// taking initial values from user
	printf("Enter the value of x0: ");
	scanf("%f", &x0);
	printf("Enter the value of xn: ");
	scanf("%f", &xn);
	printf("Enter the value of n: ");
	scanf("%d", &n);

	// calculating h
	h = (xn - x0) / n;

	// Refining the values of n and h
	printf("\nRefine Value of n and h are: %d\t%f\n", n, h);

	// Table Heading
	printf("\nX Values\tY Values\n");

	// creating a table of x[i] and y[i] values, where i = 1,2,3,...,n
	for (i = 0; i <= n; i++)
	{
		x[i] = x0 + i * h;
		y[i] = f(x[i]);
		printf("\n%f\t%f\n", x[i], y[i]);
	}

	// sum value initialization, it also could be done in previous declaration statement
	sumo = 0;
	sume = 0;

	// calculating the values of x[i] and y[i], where i = 1,2,3,...,n
	for (i = 1; i < n; i++)
	{
		if (i % 2 == 1)
		{
			sumo = sumo + y[i];
		}
		else
		{
			sume = sume + y[i];
		}
	}

	// calculating and printing the final answer
	ans = h / 3 * (y[0] + y[n] + 4 * sumo + 2 * sume);
	printf("\nFinal Integration is: %f\n", ans);
	return 0;
}

/* OUTPUT:
Enter the value of x0: 2
Enter the value of xn: 4
Enter the value of n: 4

Refine Value of n and h are: 4  0.500000

X Values        Y Values

2.000000        0.333333

2.500000        0.285714

3.000000        0.250000

3.500000        0.222222

4.000000        0.200000

Final Integration is: 0.510847 */