#include <stdio.h>
#include <string.h>

#define SIZE_NAME 16
#define SIZE_CHARACTERS 21

void sort(char sortedArr[][SIZE_CHARACTERS], int wordNum)
{
    char temp[SIZE_CHARACTERS];
    const int ONE = 1;

    for (int k = 0; k < wordNum - ONE; k++)
    {
        for (int j = 0; j < wordNum; j++)
        {
            if (strcmp(sortedArr[k], sortedArr[j]))
            {
                strcpy(temp, sortedArr[k]);
                strcpy(sortedArr[k], sortedArr[j]);
                strcpy(sortedArr[j], temp);
            }
        }
    }
}

int strList(char sortedArr[][SIZE_CHARACTERS], char mainStr[], char hint[], char sep[])
{
    // Making variable to know where the words begin
    const char start = ':';

    // Saving the hint
    for (int i = 0; mainStr[i] != start; i++)
    {
        hint[i] = mainStr[i];
    }

    // making a pointer to start from the first word
    char *token;
    token = strchr(mainStr, start);

    // separating the words
    token += sizeof(char);
    token = strtok(token, sep);

    // amount of words in the game
    int wordNum = 0;

    // Copying each word to a new array
    while (token != NULL)
    {
        strcpy(sortedArr[wordNum], token);
        token = strtok(NULL, sep);
        wordNum++;
    }
    // returning number of words in a game
    return wordNum;
}

void shape(int stage)
{

    // Constant interger for shape stages lines
    const int ZERO = 0, ONE = 1, TWO = 2, THREE = 3, FOUR = 4, FIVE = 5, SIX = 6;

    // stage 1 prints
    if (stage == ONE)
    {
        printf("________________\n");
        for (int t = 0; t < FIVE; t++)
        {
            printf("|            |\n");
        }
        printf("|____________|\n");
    }

    // stage 2 prints
    if (stage == TWO)
    {
        printf("________________\n");
        for (int t = 0; t < FIVE; t++)
        {
            if (t == ONE || t == TWO)
            {
                printf("| **           |\n");
            }
            else
            {
                printf("|            |\n");
            }
        }
        printf("|____________|\n");
    }

    // stage 3 prints
    if (stage == THREE)
    {
        printf("________________\n");
        for (int t = 0; t < FIVE; t++)
        {
            if (t == ONE || t == TWO)
            {
                printf("| **          ** |\n");
            }
            else
            {
                printf("|            |\n");
            }
        }
        printf("|____________|\n");
    }

    // stage 4 prints
    if (stage == FOUR)
    {
        printf("________________\n");
        for (int t = 0; t < FIVE; t++)
        {
            if (t == ZERO)
            {
                printf("| --          |\n");
            }

            else if (t == ONE || t == TWO)
            {
                printf("| **          ** |\n");
            }
            else
            {
                printf("|            |\n");
            }
        }
        printf("|____________|\n");
    }

    // stage 5 prints
    if (stage == FIVE)
    {
        printf("________________\n");
        for (int t = 0; t < FIVE; t++)
        {
            if (t == ZERO)
            {
                printf("| --         -- |\n");
            }

            else if (t == ONE || t == TWO)
            {
                printf("| **          ** |\n");
            }
            else
            {
                printf("|            |\n");
            }
        }
        printf("|____________|\n");
    }

    // stage 5 prints
    if (stage == SIX)
    {
        printf("________________\n");
        for (int t = 0; t < FIVE; t++)
        {
            if (t == ZERO)
            {
                printf("| --         -- |\n");
            }

            else if (t == ONE || t == TWO)
            {
                printf("| **          ** |\n");
            }
            else if (t == FOUR)
            {
                printf("| \\/\\/\\/\\/\\/\\/\\ |");
            }

            else
            {
                printf("|            |\n");
            }
        }
        printf("|____________|\n");
    }
}

void game(char sortedArr[][SIZE_CHARACTERS], int option, int lenOfOption, char hint[])
{

    // Variable to know what stage you are in
    int stage = 1;

    // flags for the clue and the same letter statement
    int hintFlag = 1;
    int outFlag = 1;
    int correctFlag = 1;

    // array of answer
    char answers[SIZE_CHARACTERS] = {0};

    // index of the letter in the array
    int letIndex = 0;

    // choice of user
    char choice = 0;
    char enter;

    // constant chars for the arrays of the answer and line
    const char UNDERLINE = '_', SPACE = ' ', ASTERISK = '*';

    // answer line array
    // char line[lenOfOption];
    char line[20];

    // making the answer line

    for (int i = 0; i < lenOfOption; i++)
    {
        if (sortedArr[option][i] != SPACE)
        {
            line[i] = UNDERLINE;
        }
        // if the spot is space
        else
        {
            line[i] = SPACE;
        }
    }
    const int ZERO = 0, ONE = 1, SIX = 6;

    while (ONE)
    {
        // printing the shape
        shape(stage);

        // Checking is the user won, if he did -break
        if (strcmp(line, sortedArr[option]) == ZERO)
        {
            printf("The word is %s, good job!", sortedArr[option]);
            break;
        }

        // printing the answer line
        for (int i = 0; i < lenOfOption; i++)
        {
            printf("%c", line[i]);
        }

        // checking need of printing the hint statement
        if (hintFlag == ONE)
        {
            printf("\nDo you want a clue? press -> *");
        }

        // letter the user tried
        printf("\nThe letters that you already tried:");

        // printing array of used letter
        for (int k = 0; k < letIndex; k++)
        {
            if (k == letIndex - 1)
            {
                printf("%c", answers[k]);
            }
            else
            {
                printf("%c", answers[k]);
            }
        }

        // asking for letters
        printf("\nPlease chose the letter:\n");
        // scanf("%*[^\n]");
        // scanf("%*[^\n]%*c");
        scanf(" %c %c ", &enter, &choice);

        // if the user wants clue
        if (choice == ASTERISK && hintFlag == ONE)
        {
            printf("The clue is:");
            for (int i = 0; i < strlen(hint); i++)
            {
                printf("%c", hint[i]);
            }
            printf(".\n");
            hintFlag = 0;
        }
        else if (choice != ASTERISK)
        {
            for (int i = 0; i < letIndex; i++)
            {
                if (choice == answers[i])
                {
                    outFlag = 0;
                }
            }

            // if it hasn't been used
            if (outFlag == ONE)
            {
                // put used letter array
                answers[letIndex] = choice;
                letIndex++;

                // if the letter is correct
                for (int i = 0; i < lenOfOption; i++)
                {
                    if (sortedArr[option][i] == choice)
                    {
                        line[i] = choice;
                        correctFlag = 0;
                    }
                }
                // if letter is wrong
                if (correctFlag == ONE)
                {
                    // raise the stage
                    if (stage < SIX)
                    {
                        stage++;
                    }

                    // if its a final stage
                    if (stage == SIX)
                    {
                        shape(stage);
                        printf("The word was %s, GAME OVER!!", sortedArr[option]);
                        break;
                    }
                }
            }
            // if the letter was used
            else
            {
                printf("You have already tried that letter.\n");
            }
        }
        outFlag = 1;
        correctFlag = 1;
    }
}

int main()
{
    // The main array of words to be guessed in the game
    char mainStr[SIZE_NAME * SIZE_CHARACTERS];
    char sortedArr[SIZE_NAME][SIZE_CHARACTERS];
    char hint[SIZE_CHARACTERS] = {0};

    // ask the user for word
    printf("Enter your words:\n");
    // scanf("%[^\n]", mainStr);
    fgets(mainStr, sizeof(mainStr), stdin);

    // sending the array of words to be separated and getting the number of words
    int wordNum = strList(sortedArr, mainStr, hint, ",");

    // sending separate array to be sorted
    sort(sortedArr, wordNum);

    // printing the sorted array as a list
    const int ONE = 1;
    printf("Choose an option: \n");
    for (int i = 0; i < wordNum; i++)
    {
        printf("%d: %s\n", (i + ONE), sortedArr[i]);
    }

    // Variable to store the option
    int option;
    scanf("%d", &option);
    option -= ONE;

    // checking the length of the word because the array begins from index 0, but the list from 1 so (option -1)
    int lenOfOption = strlen(sortedArr[option]);

    // Starting the game
    game(sortedArr, option, lenOfOption, hint);

    return 0;
}