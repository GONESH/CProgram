#include<stdio.h>
int main()
{
    int age=34;
    switch (age)
    {
    case 24:
        printf("You are 24");
        break;
    case 25:
        printf("You are 25");
        break;
    case 26:
        printf("You are 26");
        break;
    case 27:
        printf("You are 27");
        break;
    case 28:
        printf("You are 28");
        break;
    
    default:
    printf("You are not 24,25,26,27,28");
        break;
    }
    return 0;
}