// Date: 13th April

/*
Question: Write a program in C to find a real root of the equation x^3 + 3x - 5 = 0 by bisection method
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float f(float x)
{
    return (pow(x, 3) + 3 * x - 5);
}

int main()
{
    float a, b, c, y1, y2, y3;
    float eps = 0.000001;
    printf("\nEnter the values of a and b: \n");
    scanf("%f%f", &a, &b);
    y1 = f(a);
    y2 = f(b);
    if (y1 * y2 > 0)
    {
        printf("There is no guarantee for a root within [a,b]\n");
        exit(0);
    }
    do
    {
        c = (a + b)/2;
        y3 = f(c);
        if (y3 == 0 || fabs(y3) < eps)
        {
            a = c;
            b = c;
        }
        else if (y1 * y3 < 0)
        {
            b = c;
            y2 = y3;
        }
        else
        {
            a = c;
            y1 = y3;
        }
    } while (fabs(b - a) > eps);
    printf("The desired root is %8.6f\n", c);
    return 0;
}


/* OUTPUT: 
Enter the values of a and b: 
1
2
The desired root is 1.154172 */