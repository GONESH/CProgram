// snake water gun-game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// int snakeWaterGun(char you, char comp)
// {
//     if (you == comp){
//         return 0;
//     }
//     else if ((you == 's' && comp == 'w') || (you == 'w' && comp == 'g') || (you == 'g' && comp == 's')){
//         return 1;
//     }
//     else{
//         return -1;
//     }
    
// }

int snakeWaterGun(char you, char comp)
{
    if(you==comp){
        return 0;
    }
    else if((you=='s' && comp=='w') || (you=='w' && comp=='g')|| (you=='g' && comp=='s')){
        return 1;
    }
    else{
        return -1;
    }
}


int main()
{
    char you, comp;
    int n;
    srand(time(0));
    int number = rand() % 100 + 1;
    if (number < 33)
    {
        comp = 's';
    }
    else if (number < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
    printf("Enter 's' for Snake, 'w' for water, 'g' for gun\n");
    scanf("%c", &you);
    // if (you==n){
    //     printf("Please enter a character");

    // }
    // // else{
    // //     return 0;
    // // }
    
    
    int result = snakeWaterGun(you, comp);
    if (result == 0)
    {
        printf("The game is tie\n");
    }
    else if (result == 1)
    {
        printf("You win\n");
    }
    else
    {
        printf("You lose\n");
    }
    printf("You chose %c and the computer chose %c\n", you,comp);

    return 0;
}