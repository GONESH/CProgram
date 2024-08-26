/*
Use a for loop to create a program that only print even values between 0 and 10:
*/

#include <stdio.h>
int main()
{
    int i;

    for (i = 0; i <= 10; i = i + 2)
    {
        printf("%d\n", i);
    }
    return 0;
}