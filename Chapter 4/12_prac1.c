/*
WAP to print multiplication of table of a given number n.
*/
#include <stdio.h>
int main()
{
    // int n = 3;
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    // for (int i = 1; i < 11; i++)
    // {
    //     printf("%d X %d = %d\n", n, i, n * i);
    // }

    //in reverse order

    for (int i = 10; i >=1; i--)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }
    

    return 0;
}