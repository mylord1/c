// Date: 19th April

/*
Question: Write a program in c to find a real root of the equation 3x-1 = cosx by iteration method
        given eps = 0.00001.
*/

#include <stdio.h>
#include <math.h>

float phi(float x)
{
    return ((1 + cos(x)) / 3);
}

int main()
{
    float x0, x1, eps = 0.00001;
    printf("\nEnter the initial value:\n");
    scanf("%f", &x0);
    x1 = x0;
    do
    {
        x0 = x1;
        x1 = phi(x0);
    } while (fabs(x1 - x0) > eps);
    printf("The real root is: %8.5f\n", x1);
    return 0;
}

/* OUTPUT:
Enter the initial value:
0
The real root is:  0.60710 */