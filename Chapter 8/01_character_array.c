
#include<stdio.h>
int main ()
{
    // Method -one
    char str1[]={'T','h','a','p','a','\0'}; //-\0 is an escape sequence need to let string know we have come to the end of our strings.
    printf("%s \n", str1); // - %s for string

    /*
    Note- Single quote is for marking character.
    Double quote is for marking string.
    */


    //Method -2 (Two)
    //When you declare str[]=""; within double quotation mark, escape sequence will
    // be automatically loaded by compiler.
    char str2[]="Tapas"; //this is a string literal, it is a string that is written in the code itself.
    printf("%s \n", str2);
    return 0;
}