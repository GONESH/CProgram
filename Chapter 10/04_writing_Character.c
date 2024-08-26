/*
fgetc() and fputc() function to write character to a file
*/

#include <stdio.h>
int main()
{
    FILE *ptr;
    // To write character 'c' to the file
    //  ptr = fopen("fgetcputc.txt", "w");
    //  fputc('c',ptr);

    // To read a charater from file
    ptr = fopen("fgetcfputc.txt", "r");
    char ch = fgetc(ptr);
    printf("The value of ch is %c\n", ch);

    ch = fgetc(ptr);
    printf("The value of ch is %c\n", ch);

    ch = fgetc(ptr);
    printf("The value of ch is %c\n", ch);
    fclose(ptr);

    return 0;
}