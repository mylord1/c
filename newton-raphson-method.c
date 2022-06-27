// Date 29th March

//Question: Write a program in C to find a root of the equation xlog10x - 1.2 = 0 using Newton-Raphson Method

//Working Formula: x_(n+1) = x_n - {f(x_n)} / {derivative of f(x_n)}

#include <stdio.h>
#include <math.h>

// Defining the function
float f(float x)
{
    return x * log10(x) - 1.2;
}

// Calculating derivative of the function
float df(float x)
{
    return log10(x) + 0.43429;
}

int main()
{
    int itr, maxmitr;
    float h, x0, x1, allerr;

    // taking user inputs
    printf("Enter x0, allowed error and maximum iterations: \n");
    scanf("%f%f%d", &x0, &allerr, &maxmitr);

    // Calculating the results
    for (itr = 1; itr <= maxmitr; itr++)
    {
        h = f(x0) / df(x0);
        x1 = x0 - h;
        printf("At Iteration on %3d, X = %9.6f\n", itr, x1);
        if (fabs(h) < allerr)
        {
            printf("After %3d iterations root = %8.6f\n", itr, x1);
            return 0;
        }
        x0 = x1;
    }

    printf("The required solution does not coneverge or iterations are insufficient.\n");
    return 0;
}


/* OUTPUT:
Enter x0, allowed error and maximum iterations: 
2
0.00001
10
At Iteration on   1, X =  2.813170
At Iteration on   2, X =  2.741109
At Iteration on   3, X =  2.740646
At Iteration on   4, X =  2.740646
After   4 iterations root = 2.740646 */