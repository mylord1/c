// Date: 20 April

/*
Question: Write a program in C to find a real root of the equation x^2 - 2x - 3 = 0 by Regula-Falsi Method.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float f(float x)
{
    return (x * x - 2 * x - 3);
}

int main()
{
    float x0, x1, x2, y0, y1, y2, eps = 0.00001;
    printf("\nEnter the values of x0 and x1:\n");
    scanf("%f%f", &x0, &x1);
    y0 = f(x0);
    y1 = f(x1);
    if (y0 * y1 > 0)
    {
        printf("There is no guarantee for a root within [%6.3f,%6.3f]\n", x0, x1);
        exit(0);
    }
    do
    {
        x2 = (x0 * y1 - y0 * x1) / (y1 - y0);
        y2 = f(x2);
        if (fabs(y2) < eps)
        {
            printf("The real root is %8.5f\n", x2);
            exit(0);
        }
        if (y0 * y2 < 0)
        {
            x1 = x2;
            y1 = y2;
        }
        else
        {
            x0 = x2;
            y0 = y2;
        }
    } while (fabs(y2 < eps));
    return 0;
}

/* OUTPUT:
Enter the values of x0 and x1:
0
3
The real root is 3.00000 */
