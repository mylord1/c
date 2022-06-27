//Date: 19th May

#include <stdio.h>
#include <math.h>
#define SIZE 10

int main()
{
    float a[SIZE][SIZE], x[SIZE], x_new[SIZE];
    float temp, lambda_new, lambda_old, error;
    int i, j, n, step = 1;

    /* Initial Date */
    printf("Enter the Order of Square Matrix: ");
    scanf("%d", &n);
    printf("Enter Tolerable error: ");
    scanf("%f", &error);

    /* Reading Given Matrix */
    printf("Enter Co-efficient of Matrix:\n");
    for (i = 1; i <=n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%f", &a[i][j]);
        }
    }

    /* Reading Initial Guess Vector */
    printf("Enter Initial Guess Vector:\n");
    for (i = 1; i <=n ; i++)
    {
        printf("x[%d]=", i);
        scanf("%f", &x[i]);
    }
    
    /* Initializing Lambda_Old */
    lambda_old = 1;

    /* Multiplication */
    up:
    for (i = 1; i <=n; i++)
    {
        temp = 0.0;
        for (j = 1; j <=n; j++)
        {
            temp = temp + a[i][j] * x[j];
        }
        x_new[i] = temp;
    }

    /* Replacing */
    for (i = 1; i <=n; i++)
    {
        x[i] = x_new[i];
    }
    
    /* Finding Largest*/
    lambda_new = x[1];
    for (i = 1; i <=n; i++)
    {
        if (fabs(x[i])>fabs(lambda_new))
        {
            lambda_new = x[i];
        }
    }
    
    /* Normalization */
    for (i = 1; i <=n; i++)
    {
        x[i] = x[i] / lambda_new;
    }
    
    /* Display Results */
    printf("\n\nStep-%d:\n", step);
    printf("Eigen Value = %f\n", lambda_new);
    printf("Eigen Vector:\n");
    for (i = 1; i <=n; i++)
    {
        printf("%f\t", x[i]);
    }

    /* Checking Accuracy */
    if (fabs(lambda_new-lambda_old)>error)
    {
        lambda_old = lambda_new;
        step++;
        goto up;
    }
    return 0;
}

/* OUTPUT:
Enter the Order of Square Matrix: 2
Enter Tolerable error: 0.001
Enter Co-efficient of Matrix:
a[1][1]=2
a[1][2]=-12
a[2][1]=1
a[2][2]=-5
Enter Initial Guess Vector:
x[1]=1
x[2]=1


Step-1:
Eigen Value = -10.000000
Eigen Vector:
1.000000        0.400000

Step-2:
Eigen Value = -2.800000
Eigen Vector:
1.000000        0.357143

Step-3:
Eigen Value = -2.285714
Eigen Vector:
1.000000        0.343750

Step-4:
Eigen Value = -2.125000
Eigen Vector:
1.000000        0.338235

Step-5:
Eigen Value = -2.058824
Eigen Vector:
1.000000        0.335714

Step-6:
Eigen Value = -2.028572
Eigen Vector:
1.000000        0.334507

Step-7:
Eigen Value = -2.014085
Eigen Vector:
1.000000        0.333916

Step-8:
Eigen Value = -2.006994
Eigen Vector:
1.000000        0.333624

Step-9:
Eigen Value = -2.003484
Eigen Vector:
1.000000        0.333478

Step-10:
Eigen Value = -2.001739
Eigen Vector:
1.000000        0.333406

Step-11:
Eigen Value = -2.000869
Eigen Vector:
1.000000        0.333370
*/