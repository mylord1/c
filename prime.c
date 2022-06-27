#include <stdio.h>
int main()
{
    int n, count = 0;

    // taking value from user
    printf("Enter any number: ");
    scanf("%d", &n);

    // counting divisible number
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    // logic
    if (count == 2)
    {
        printf("The number is prime.\n");
    }
    else
    {
        printf("The number is not prime.\n");
    }
    return 0;
}