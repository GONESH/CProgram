#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, noOfguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;

    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Your guess is too high. Enter lower number\n");
        }
        else if (guess < number)
        {
            printf("Your guess is too low. Enter higher number\n");
        }
        else
        {
            printf("You guessed it right in %d attempts\n", noOfguesses);
        }
        noOfguesses++;
    } while (guess != number);

    return 0;
}