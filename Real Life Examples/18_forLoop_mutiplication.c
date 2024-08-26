/*
Use a for loop to create a program that prints the multiplication table of a specified number (2 in this example):
*/

#include <stdio.h>
int main()
{
    int number = 2;
    int i;

    // Print the multiplication table for the number 2
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    
    return 0;
}