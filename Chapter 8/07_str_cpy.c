/*
strcpy()- is used to copy the content of second string into first sting passes to it.
*/

#include<stdio.h>
#include<string.h>
int main ()
{
    char source[]="Thapa";
    char target[40];
    //target string should have the enough capacity to store the source string
    strcpy(target,source);
    
    printf("The source string is %s\n",source);
    printf("The target string is %s\n",target);
    
    return 0;
}