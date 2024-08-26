#include <stdio.h>
int main()
{
    int i = 0;
    while (i < 21)
    {
        if (i>=10)
        {
            printf("The value of i is %d \n", i);
        }
        
        //printf("The natural numbers are %d\n", i);
        i++;
    }
    printf("The code has ended");
    return 0;
}