// Implementing 21_prac10.c using while and do while loops;
#include <stdio.h>
int main()
{
    // While loop
    int i = 2;
    int n;
    int isPrime = 1;
    printf("Enter a number to check if it is prime or not: ");
    scanf("%d", &n);

    // while (i < n)
    // {

    //     if (n % i == 0)
    //     {
    //         isPrime = 0;
    //         break;
    //     }
    //     i++;
    // }
    // if (isPrime)
    // {
    //     printf("It is prime");
    // }
    // else
    // {
    //     printf("It is not prime");
    // }

    // do while
    do
    {
        if ((n % i == 0))
        {
            isPrime = 0;
            break;
        }
        i++;

    } while (i < n);
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