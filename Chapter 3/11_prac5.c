/* 
WAP to determine whether a character entered by the user is lowercase or not.
https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
*/

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:\n ");
    scanf("%c", &ch);

    if (ch>=97 && ch<=122)
    {
        printf("The character is a lowercase letter.\n");
    }
    else{
        printf("The character is uppercase letter.\n");
    }
    

    printf("The character enter by the user is %c", ch);


    return 0;
}