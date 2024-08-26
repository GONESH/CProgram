/*
WAP to decrypt the string encrypted using encrypt function in 15_prac6.c
*/

#include <stdio.h>

int main()
{
    char name[] = "Uibqb";
    for (int i = 0; i < 5; i++)
    {
        name[i]--;
    }
    printf("The decrypted string is %s", name);
    return 0;
}