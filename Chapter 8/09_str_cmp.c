
/*
strcmp()- compare two strings .
return:
0 if the strings are equal
1 if the first string is greater than the second string (negative)
2 if the first string is less than the second string (positive)
Example:
strcmp("abc", "abc") = 0
strcmp("abcd", "def") = negative
strcmp("for", "joke") = positive
*/

#include<stdio.h>
#include<string.h>

int main ()
{
    char source[]="aa";
    char target[]="aa";  
    
    
    printf("The strcmp returns string is %d\n",strcmp(source,target));
   
    
    return 0;
}