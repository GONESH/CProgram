#include<stdio.h>

int main(){
    FILE *ptr;
    // ptr = fopen("writRead.txt", "w");  
    // fputc('c', ptr);

    ptr = fopen("writeRead.txt", "r");  
    char ch = fgetc(ptr);
    fprintf(ptr,"%c",ch);
    // printf("The value of ch is %c\n", ch);
    // ch = fgetc(ptr);
    // printf("The value of ch is %c\n", ch);
    // ch = fgetc(ptr);
    // printf("The value of ch is %c\n", ch);
    fclose(ptr);
    return 0;
}