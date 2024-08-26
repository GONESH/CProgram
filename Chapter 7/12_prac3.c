/*
WAP to create an array of 10 integers and store multiplicaation table of 5 in it.
*/

#include<stdio.h>
int main ()
{
    int i,j;
    int a[10];
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        a[i]=n*(i+1); //i + 1 - index will start at 1
        printf("The value of %d X %d is %d\n", n, i+1,a[i]);
    }
    // for(i=0;i<10;i++)
    // {
    //     a[i]=5*(i+1); //i + 1 - index will start at 1
    //     printf("The value of 5 X %d is %d\n", i+1,a[i]);
    // }
    return 0;
}