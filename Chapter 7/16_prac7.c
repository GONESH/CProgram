/*
Creat an array of size 3X10 containing multiplication tables 
of the numbers 2,7 and 9 respectively.
*/

#include <stdio.h>
int main()
{
    int mulTable[3][10];
    int num[] = {2, 7, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            mulTable[i][j] = num[i] * (j+1);

        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 10; j++)
        {
            printf("%d ", mulTable[i][j]);
        }
        printf("\n");
        
    }
    

    return 0;
}