

#include<stdio.h>
int main ()
{
    FILE *ptr;
    ptr=fopen("sampleFile.txt", "r");
    char ch;
    // fscanf(ptr, "%c",&ch);
    // printf("The character ch is %c",ch);
    int i;
    fscanf(ptr, "%d",&i);
    printf("The integer i is %d",i);

    return 0;
}

/*
File opening modes in C
"r" --> open for reading -->If files doesnt exist, fopen returns NULL
"rb" --> open for reading in binary -->If files doesnt exist, fopen returns NULL
"w" --> open for writing --> if the file exixt, the content will be overwritten.
"wb" --> open for writing in binary-->if the file exixt, the content will be overwritten.
"a" --> open for append --> if the file doesnt exist it will be created.
*/