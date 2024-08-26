/*
Use strings to create a simple welcome message:
*/

#include <stdio.h>
int main()
{
    char message[] = "Good to see you,";
    char fname[] = "John";

    printf("%s %s!", message, fname);
    return 0;
}