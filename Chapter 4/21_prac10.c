// WAP to check whether a given number is prime or not using loops.
#include <stdio.h>
int main()
{
    // prime numbers
    // int n=6;
    int n;
    int isPrime = 1; //non zero values is consider as true

    printf("Enter a number to check prime: ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++) // if number is divisible in this range the it is prime
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
    {
        printf("It is prime");
    }
    else
    {
        printf("It is not prime");
    }

    return 0;
}