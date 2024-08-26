/*
Find out if a number is even or odd:
*/
#include <stdio.h>
int main()
{
    int myNum = 5;

    if (myNum % 2 == 0)
    {
        printf("%d is even.\n", myNum);
    }
    else
    {
        printf("%d is odd.\n", myNum);
    }
    return 0;
}