#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 50
#define MAX_GUESSES 6
#define NUM_WORDS 1000

char* words[NUM_WORDS];

void read_words_from_file() {
    FILE *file = fopen("hangman.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return;
    }

    for (int i = 0; i < NUM_WORDS; i++) {
        words[i] = (char*)malloc(MAX_WORD_LENGTH * sizeof(char));
        fscanf(file, "%s", words[i]);
    }

    fclose(file);
}

void display_word(char word[], char dashes[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%c", dashes[i]);
    }
    printf("\n");
}

void display_hangman(int guesses) {
    if (guesses == 6) {
        printf(" _______\n");
        printf("|       |\n");
        printf("|       |\n");
        printf("|       |\n");
        printf("|       |\n");
        printf("|_______|\n");
    } else if (guesses == 5) {
        printf(" _______\n");
        printf("|       |\n");
        printf("|       O\n");
        printf("|       |\n");
        printf("|       |\n");
        printf("|_______|\n");
    } else if (guesses == 4) {
        printf(" _______\n");
        printf("|       |\n");
        printf("|       O\n");
        printf("|       |\n");
        printf("|      / \\\n");
        printf("|_______|\n");
    } else if (guesses == 3) {
        printf(" _______\n");
        printf("|       |\n");
        printf("|       O\n");
        printf("|      /|\n");
        printf("|      / \\\n");
        printf("|_______|\n");
    } else if (guesses == 2) {
        printf(" _______\n");
        printf("|       |\n");
        printf("|       O\n");
        printf("|      /|\\\n");
        printf("|      / \\\n");
        printf("|_______|\n");
    } else if (guesses == 1) {
        printf(" _______\n");
        printf("|       |\n");
        printf("|       O\n");
        printf("|      /|\\\n");
        printf("|      / \\\n");
        printf("|_______|\n");
        printf("You're running out of guesses!\n");
    } else {
        printf(" _______\n");
        printf("|       |\n");
        printf("|       O\n");
        printf("|      /|\\\n");
        printf("|      / \\\n");
        printf("|_______|\n");
        printf("Game over! You didn't guess the word.\n");
    }
}

int main() {
    read_words_from_file();

    srand(time(NULL));
    int random_index = rand() % NUM_WORDS;
    char* word = words[random_index];
    int length = strlen(word);

    char dashes[MAX_WORD_LENGTH];
    for (int i = 0; i < length; i++) {
        dashes[i] = '-';
    }

    int guesses = MAX_GUESSES;
    char guess;

    while (guesses > 0) {
        display_word(word, dashes, length);
        display_hangman(guesses);
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