
/*
WAP to print the address of a variable.
use this address to get the value of this variable.
*/
#include <stdio.h>
int main()
{
    int i=3;
    printf("The address if i is %u\n",&i);
    printf("The value if i is %d\n",*(&i));

    return 0;
}