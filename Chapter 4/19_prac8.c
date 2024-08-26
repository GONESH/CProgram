// WAP to calculate the factorial of a given number using a for loop

#include <stdio.h>
int main()
{
    // Factorial
    //  n!= 1 * 2 * 3 * 4 * 5 .... *n
    //  n! = 1 * 2 * 3 * 4 .... (n-1) * n
    // 4!= 4 * 3 * 2 * 1 = 24
    // 4!= 1 * 2 * 3 * 4 = 24
    // 0! = 1
    // int n=4
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
        // fact *=i;
    }
    printf("The factorial of a number is %d\n", fact);

    return 0;
}