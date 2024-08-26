
#include<stdio.h>
int main ()
{
    char ch1[45];
    printf("Enter your name and see magic\n");
    gets(ch1);
    gets(ch1);
    //gets() ia a function which can be used to receive a multi-line string with spaces.
    // multiple gets() calls will be needed for multiple line
    puts(ch1); //prints the string, places the cusor on the next line
    // puts(ch1); //multiple puts() needed for printing multiple line

    // printf("%s\n",ch1);
    printf("Done printing string\n",ch1);
    return 0;
}