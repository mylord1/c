// Date: 6th April

/*
Question:  Write a program in C to find y(0.6) using Euler's Method given dy/dx = (x-y) with
            y(0)=1 taking h = 0.2

Working Formula: If h is the stop length then, x1 = x0 + h
                    y1 = y0 + hf(x,y)
                    y2 = y1 + hf(x,y)
                    .
                    .
                    yn = y_(n-1) + hf(x_(n-1), y_(n-1))
generally --> y_i = y_(i-1) + hf(x_(i-1), y(i-1)) where i = 1,2,3,....,n
*/
#include <stdio.h>

float f(float x, float y)
{
    return (x - y);
}

int main()
{
    int i;
    float x0, y0, h, x, y, n;
    printf("Enter the values of x0, y0, h, x: \n");
    scanf("%f%f%f%f", &x0, &y0, &h, &x);
    n = (x - x0) / h;
    x = x0;
    y = y0;
    for (i = 1; i <= n; i++)
    {
        y = y + h * f(x, y);
        x = x + h;
    }
    printf("The required value of y is: %f\n", y);
    return 0;
}

/* OUTPUT:
Enter the values of x0, y0, h, x:
0
1
0.2
0.6
The required value of y is: 0.624000 */