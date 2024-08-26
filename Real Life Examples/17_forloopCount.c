/*
Use a for loop to create a program that counts to 100 by tens:
*/

#include <stdio.h>
int main()
{
    for (int i = 0; i <= 100; i += 10)
    {
        printf("%d\n", i);
    }
    return 0;
}