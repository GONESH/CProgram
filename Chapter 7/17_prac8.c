/*
repeat 16_prac7.c for a custom input given by the user
*/

#include <stdio.h>
int main()
{
    int mulTable[3][10];
    // int num[]={2,7,9};
    int num1,num2,num3;
    printf("Enter first number:\n");
    scanf("%d",&num1);
    printf("Enter first number:\n");
    scanf("%d",&num2);
    printf("Enter first number:\n");
    scanf("%d",&num3);

    int num[]={num1,num2,num3};


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