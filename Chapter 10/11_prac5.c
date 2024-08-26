/*
WAP to modify a file containing an integer to double its value.

prev file --------> New File
2 ----------------> 4
*/

#include<stdio.h>
int main ()
{
    FILE *fp;
    int i;
    fp=fopen("11_prac5.txt","r");
    fscanf(fp,"%d",&i);

    fp=fopen("11_prac5.txt","w");
    fprintf(fp,"%d",i*2);
    fclose(fp);
    return 0;
}