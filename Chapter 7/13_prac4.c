/*
Repeat 12_prac3.c for general input provided by the user using scanf
*/
#include<stdio.h>
int main ()
{
    int a[10];
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    
    for(int i=0;i<10;i++)
    {
        a[i]=n*(i+1); //i + 1 - index will start at 1
    }
    for (int i = 0; i < 10; i++)
        {
        printf("The value of %d X %d is %d\n", n,(i+1),a[i]);
            
        }
         
    return 0;
}