#include <stdio.h>
int main()
{
    int age = 45;
    int placeCode = 12;

    // Scenerio 1

        if (age>18)
        {
            printf("You are eligible to vote\n");
        }
        else if (age>15)
        {
            printf("You are not eligible to vote but can wait a few years");

        }
        else{
            printf("You are a kid");
        }
   
    // Scenerio 2
    // if (age > 18)
    // {
    //     printf("You are eligible to vote\n");
    // }
    // if (age > 15)
    // {
    //     printf("You are not eligible to vote but can wait a few years");
    // }
    // if (age <=15)
    // {
    //     printf("You are a kid");
    // }
    
    return 0;
}