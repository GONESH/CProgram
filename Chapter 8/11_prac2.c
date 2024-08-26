/*
WAP to take a string as an input from the user using %c and %s.
Confirm that the string are equal.
*/

#include<stdio.h>
#include<string.h>
int main ()
{
    char st[50];
    printf("Enter the string you want using percent c:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &st[i]);
        fflush(stdin); 
    }
    st[50]='\0';
    // char str1[100],str2[100];
    printf("Comparing this string with thapa gives %d", strcmp("thapa",st));
    return 0;
}

/*
Code output:
Enter the string you want usin percent c:
r
t
y
-only 3 character are entered in array of 5
why?
-- if we use scanf (inside for loop Or any kind of loop) 
then the enter key will take one space for character.
-- so we have to use getchar() to take the enter key as a character.
How to solve this:
--- we used - fflush(stdin)- this remove the enter key from stdin 
-- I.E. When the scanf() run then it will take the fresh character.
*/