// 4th April

/*
Question: Write a program in C to evaluate the integral (integration 0 to 5) dx/(1+x) by
            trapezoidal rule taking h=1

Working Formula: I_T = h/2*[y_0 + y_n + 2*(y_1 + y_2 + ... + y_(n-1))]
*/

#include <stdio.h>
#include <math.h>

// Defining the function
float f(float x)
{
    return (1 / (1 + x));
}

int main()
{
    int n, i;
    float h, x0, xn, x[20], y[20], sum, ans;

    // Taking user inputs
    printf("Enter the values of x0, xn,h:\n");
    scanf("%f%f%f", &x0, &xn, &h);
    n = (xn - x0) / h;

    // Creating Columns
    printf("\nX values\tY values\n");
    for (i = 0; i <= n; i++)
    {
        x[i] = x0 + i * h;
        y[i] = f(x[i]);
        printf("\n%f\t%f\n", x[i], y[i]);
    }

    // Calculating Answer
    sum = 0;
    for (i = 1; i < n; i++)
    {
        sum = sum + y[i];
    }
    ans = h / 2 * (y[0] + y[n] + 2 * sum);
    printf("Final Intergration is %5.3f\n", ans);
    return 0;
}

/* OUTPUT:
Enter the values of x0, xn,h:
0
5
1

X values        Y values

0.000000        1.000000

1.000000        0.500000

2.000000        0.333333

3.000000        0.250000

4.000000        0.200000

5.000000        0.166667
Final Intergration is 1.867 */