// Date 31st March

/*Question: Write a program in C to calculate y(0.4) using Runge-Kutta Method taking h = 0.1,
given that dy/dx = x - y, y(0) = ?
*/

// Working Formula: already included in code logic in for loop

#include <stdio.h>
#include <math.h>

// Defining the function
float f(float x, float y)
{
    return (x - y);
}

int main()
{
    float x0, y0, x, y, h, k, k1, k2, k3, k4, n;

    // Taking user inputs
    printf("Enter the value of x0,y0,x,h: \n");
    scanf("%f%f%f%f", &x0, &y0, &x, &h);
    n = (x - x0) / h;
    x = x0;
    y = y0;

    // Calculating the values
    for (int i = 1; i <= n; i++)
    {
        k1 = h * f(x, y);
        k2 = h * f(x + h / 2, y + k1 / 2);
        k3 = h * f(x + h / 2, y + k2 / 2);
        k4 = h * f(x + h, y + k3);
        k = (k1 + 2 * k2 + 2 * k3 + k4) / 6;
        x = x + h;
        y = y + k;
    }
    printf("The required value of y at the point %f = %8.6f\n", x, y);
    return 0;
}

/* OUTPUT:
Enter the value of x0,y0,x,h:
0
1
0.4
0.1
The required value of y at the point 0.400000 = 0.740641 */