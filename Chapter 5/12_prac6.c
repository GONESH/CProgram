// Write a recursive function to calculate the sum of first n natural numbers.

// Example: n = 5, sum = 15 (1+2+3+4+5)
// Sum(n) = 1 + 2 + 3 + 4 + . . .(n-1) + n

#include <stdio.h>
int rec(int);

int main()
{
    int n, sum = 0;
    printf("Sum of first 6 natural number is %d ", rec(6));
    return 0;
}

int rec(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return rec(n-1) + n;
}