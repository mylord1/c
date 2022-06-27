// Date: 3rd June

/*Question: Write a program in C to find the value of the integral x^3dx from limit  0 to 1 by 6-point Gauss Quadrature Method. */

#include <stdio.h>

float f(float x)
{
    return (x * x * x);
}

int main()
{
    int i;
    float a, b, p, q, result = 0, x[7], w[7];
    printf("Enter the values of a & b:\n");
    scanf("%f%f", &a, &b);
    x[1] = 0.23861919;
    x[2] = -x[1];
    x[3] = 0.66120939;
    x[4] = -x[3];
    x[5] = 0.93246951;
    x[6] = -x[5];
    w[1] = w[2] = 0.46791393;
    w[3] = w[4] = 0.36076157;
    w[5] = w[6] = 0.17132449;
    p = (b + a) / 2;
    q = (b - a) / 2;
    for (i = 1; i <= 6; i++)
    {
        result = result + w[i] * f(p + q * x[i]);
    }
    result = result * q;
    printf("The value of the integration is: %f", result);
    return 0;
}

/* Output: 
Enter the values of a & b:
0
1
The value of the integration is: 0.250000 */