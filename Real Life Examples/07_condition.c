/*
Use if..else statements to output some text depending on what time it is:
*/
#include <stdio.h>
int main()
{
    int time = 20;
    if (time < 18)
    {
        printf("Good day.");
    }
    else
    {
        printf("Good evening.");
    }
    return 0;
}