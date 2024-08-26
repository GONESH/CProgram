
/*
Write your own version of strlen function from <string.h>
*/
#include <stdio.h>
#include <string.h>

int myStrLen(char *st)
{
    int length=0;
    char *ptr = st;
    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }
    return length;
}
int main()
{
    char st[] = "thapagoneshmagarkumar";

    printf("The length of this string is %d", myStrLen(st));
    return 0;
}