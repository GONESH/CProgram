/*
Create a program that counts the number of characters found in a specific word:
*/

#include <stdio.h>
int main()
{
    char word[] = "Computer";
    printf("The word '%s' has %d characters in it.", word, strlen(word));
    return 0;
}