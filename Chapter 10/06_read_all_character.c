#include<stdio.h>

int main(){
    FILE *ptr;

    ptr = fopen("writeRead.txt", "r");  

    char ch;
    while (ch!=EOF)
    {
        char ch = fgetc(ptr);
        if (ch!=EOF){
            printf("The value of ch is %c\n", ch);

        }
        printf("The value of ch is %c\n", ch);
    }
    
    // char ch = fgetc(ptr);
    // printf("The value of ch is %c\n", ch);
    // ch = fgetc(ptr);
    // printf("The value of ch is %c\n", ch);
    // ch = fgetc(ptr);
    // printf("The value of ch is %c\n", ch);
    fclose(ptr);
    return 0;
}