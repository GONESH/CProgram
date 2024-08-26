
/*
Writing a file
*/
#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("writeFile.txt", "w");

    int i=89;
    fprintf(ptr,"%d",i);
    fclose(ptr);

    // char ch;
    // fprintf(ptr,"%c",ch);
    // fclose(ptr);


    return 0;
}