// Date 5th April

/*
Question: Write a program in C to evaluate (integration 0 to 2)dx/(1+x^2) using weedle's Rule, taking n = 12

Working Formula: (for only n=12, formula can vary to different depending on values of n)
I = 3*h/10 * [y0 + y12 + 5*(y1 + y5 + y7 + y11) + (y2 + y4 + y8 + y10) + 6*(y3 + y9) + 2*y6]

General formula: 
let [a,b] divided into n = 6m intervals, Then the value of (integration a to b)f(x)dx,
i.e, I = 3*h/10 * [y0 + yn + 5*(y1 + y5 + y7 + ... + y_(n-5) + y_(n-1)) + (y2 + y4 + y8 + ... + y_(n-4) + y_(n-2))
                    + 6*(y3 + y9 + y15 + ... + y_(n-3)) + 2*(y6 + y12 + ... + y_(n-6))]
*/

#include <stdio.h>
#include <math.h>

float f(float x)
{
    return (1 / (1 + x * x));
}

int main()
{
    int i, n;
    float h, x0, xn, x[20], y[20], s1 = 0, s2 = 0, s3 = 0, s4 = 0, ans;
    printf("Enter the values of x0, xn, n: \n");
    scanf("%f%f%d", &x0, &xn, &n);
    h = (xn - x0) / n;
    for (i = 0; i <= n; i++)
    {
        x[i] = x0 + i * h;
        y[i] = f(x[i]);
    }
    for (i = 0; i <= n - 6; i += 6)
    {
        s1 = s1 + y[i + 1] + y[i + 5];
        s2 = s2 + y[i + 2] + y[i + 4];
        s3 = s3 + y[i + 3];
    }
    for (i = 0; i <= n - 12; i += 6)
    {
        s4 = s4 + y[i + 6];
    }
    ans = (3 * h) / 10 * (y[0] + y[n] + 5 * s1 + s2 + 6 * s3 + 2 * s4);
    printf("Final Integration is : %6.4f\n", ans);
    return 0;
}

/* OUTPUT:
Enter the values of x0, xn, n: 
0
2
12
Final Integration is : 1.1071 */