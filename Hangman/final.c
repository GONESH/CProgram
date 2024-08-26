#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 20
#define MAX_GUESSES 6

void display_word(char word[], char dashes[], int length) {
    for (int i = 0; i < length; i++) {
        if (word[i] == dashes[i]) {
            printf("-");
        } else {
            printf("%c", word[i]);
        }
    }
    printf("\n");
}

int main() {
    char word[MAX_WORD_LENGTH];
    char dashes[MAX_WORD_LENGTH];
    int length;
    int guesses = MAX_GUESSES;
    char guess;

    // Generate a random word from a file (you can replace this with your own word generation method)
    FILE *file = fopen("hangman.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    fscanf(file, "%s", word);
    fclose(file);

    length = strlen(word);

    // Initialize dashes array
    for (int i = 0; i < length; i++) {
        dashes[i] = '-';
    }

    while (guesses > 0) {
        display_word(word, dashes, length);
        printf("Guess a letter: ");
        scanf(" %c", &guess);

        int correct = 0;
        for (int i = 0; i < length; i++) {
            if (word[i] == guess || word[i] == toupper(guess)) {
                dashes[i] = word[i];
                correct = 1;
            }
        }

        if (!correct) {
            guesses--;
            printf("Incorrect guess. You have %d guesses left.\n", guesses);
        }

        int won = 1;
        for (int i = 0; i < length; i++) {
            if (dashes[i] == '-') {
                won = 0;
                break;
            }
        }

        if (won) {
            display_word(word, dashes, length);
            printf("Congratulations, you won!\n");
            return 0;
        }
    }

    printf("Game over. The word was %s.\n", word);
    return 0;
}