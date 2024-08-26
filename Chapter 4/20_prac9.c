// Using while loop to calculate factorial of 19_prac8.c
#include <stdio.h>
int main()
{
    int i=1, fact = 1, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        fact *= i;
        // fact = fact * i;
        i++;
    }
    printf("The factorial of a number is %d\n", fact);

    return 0;
}