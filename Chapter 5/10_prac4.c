// WAP using recursion to calculate nth elements of fabonacci series.
// Fabonacci series -- 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144...
#include <stdio.h>

int fib(int);

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    printf("The fibonacci series of %d is %d", n, fib(n));

    return 0;
}

int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

// User input Factorial.

// int fact(int);

// int main()

// {
//     int n;
//     printf("Enter the number:");
//     scanf("%d", &n);
//     int d = fact(n);
//     printf("The value of factorial %d is %d", n, d);
//     return 0;
// }

// int fact(int n)
// {

//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }
//     return n * fact(n - 1);
// }