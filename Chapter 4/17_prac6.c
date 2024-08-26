// Implementin 16_prac5 with for and while loop:
#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }

    // Do-While Loop
    int sum1 = 0;
    int j = 1;
    do
    {
        sum1 = sum1 + j;
        j++;
    }while(j<=10);

    printf("The sum of first 10 natural numbers using for-loop is %d\n ", sum);
    printf("The sum of first 10 natural numbers using do-while loop is %d\n ", sum1);

    return 0;
}