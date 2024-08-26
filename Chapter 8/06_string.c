/*
strlen()- count the number of characters in the string 
excluding the null
character(\0)
*/

#include<stdio.h>
#include<string.h>
int main ()
{
    char str1[]="Thapa";
    int len=strlen(str1);
    // printf("The length of the string is %d",strlen(str1));
    printf("The length of the string is %d",len);
    return 0;
}