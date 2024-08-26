
/*
If s[3] is a 1-D array of integers then *(s+3) refers to the third element.
1. true
2. false
3. depends
Ans- False it will refer to the fourth element since arr starts from [0]
*/

#include<stdio.h>
int main ()
{
    int s[5] = {1,2,3,4,6};
    printf("%d\n",*(s+2));
    printf("%d",*(s+3));
    return 0;
}