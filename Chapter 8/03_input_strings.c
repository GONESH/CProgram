
#include<stdio.h>
int main ()
{
    char ch1[45];
    printf("Enter your name and see magic\n");
    scanf("%s", &ch1);
    //Scanf automaticall adds escape sequence \0
    
    printf("Your name is %s",ch1);
    return 0;
}