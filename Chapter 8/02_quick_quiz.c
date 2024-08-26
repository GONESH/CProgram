
/*
WAP to create a string using "" and print its content using a loop.

*/

#include<stdio.h>
int main ()
{
    char str[]="Thapa";
    for (int i = 0; i < 6; i++)
    {
        printf("%c",str[i]); // prints character by character
        printf("%s",str[i]); // prints entire string
    }
    
    return 0;
}