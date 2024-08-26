/*
WAP to read three integers from a file.
*/
#include<stdio.h>
int main ()
{
    int i;
    FILE *fp;
    fp=fopen("07_prac1.txt","r");
    
    fscanf(fp,"%d",&i);
    printf("The value of i is %d\n",i);

    fscanf(fp,"%d",&i);
    printf("The value of i is %d\n",i);

    fscanf(fp,"%d",&i);
    printf("The value of i is %d\n",i);
    

    return 0;
}