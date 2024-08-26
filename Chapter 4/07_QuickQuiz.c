/*
WAP to print first n natural numbers using for loop.
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d : \n", n);
    for (int i = 1; i <n ; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}