/*
WAP to check whether a number is divisible by 97 or not.
*/

#include <stdio.h>
int main()
{
    /*
    // Accepting input from the user
    int a;
    printf("Enter the number: \n");
    scanf("%d",&a);

    int b=97;

    printf("Number is divisible:%d", a%b);
    */

    // If it returns 0 then it is divisible, if it returns 1 then is not.

    int a = 97;
    printf("%d", a % 97);
    return 0;
}