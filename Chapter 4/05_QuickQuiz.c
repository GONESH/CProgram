/*
WAP to print first n natural numbers using do-while loop.
*/

#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("Enter n : ");
    scanf("%d",&n);
    // i = n;
    do {
            printf("%d\n", i);
            i++;
        }
    while (i <= n);

    printf("Code excuted sucessfully\n");

    return 0;
}