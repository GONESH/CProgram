// Write a program to calculate the sum of the numbers occuring in the multiplication table of 8. 
//(Consider 8 X 1 to 8 X 10)
#include <stdio.h>
int main()
{
    int sum=0;
    for (int i = 1; i < 11; i++)
    {
        sum += (i*8);
    }
    
    printf("The value of sum is : %d\n", sum);

    return 0;
}
/*
8*1=8
8*2=16
8*3=24
.
.
.
8*10=80
Now,
1+2+3+4...+10=55

Logic,
(i*8)= 55* 8 = 440/
*/