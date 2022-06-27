//Date : 7th April

/* 
Question: Write a program in C to find y(0.5) using modified euler method given dy/dx = x^2 - 2y + 1
            y(0)=1, taking h = 0.1
*/

#include <stdio.h>
#include <math.h>

float f(float x, float y)
{
    return (x * x - 2 * y + 1);
}

int main()
{
    float eps = 0.000001, yc, yp, f1;
    float x0, y0, xn, h, x, y;
    printf("Enter the initial and final value of x: \n");
    scanf("%f%f", &x0, &xn);
    printf("Enter the initial value of y: \n");
    scanf("%f", &y0);
    printf("Enter the step length:\n");
    scanf("%f", &h);
    y = y0;
    printf("X values\tY values:\n");
    for (x = x0; x < xn; x += h)
    {
        f1 = f(x0, y0);
        yc = y + h * f1;
        do
        {
            yp = yc;
            yc = y + (h * (f1 + f(x + h, yp))) / 2;
        } while (fabs(yp - yc) > eps);
        y = yc;
        printf("%f\t%f\n", x + h, y);
    }
    printf("The required value of y is %f\n", y);
    return 0;
}

/* OUTPUT:
Enter the initial and final value of x: 
0
0.5
Enter the initial value of y: 
1
Enter the step length:
0.1
X values        Y values:
0.100000        0.909545
0.200000        0.828678
0.300000        0.757434
0.400000        0.695849
0.500000        0.643954
The required value of y is 0.643954 */