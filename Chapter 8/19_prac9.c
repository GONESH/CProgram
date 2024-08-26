/*
Implementing 18_prac8.c using user input
*/
#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int found = 0;

    // Take user input for the string
    printf("Enter a string: ");
    scanf("%s", str);
    fgets(str, sizeof(str), stdin);

    // Take user input for the character
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Iterate through each character in the string
    for (int i = 0; str[i]!= '\0'; i++) {
        // Check if the current character is equal to the given character
        if (str[i] == ch) {
            // Set the found flag to 1
            found = 1;
            break;
        }
    }

    // Print the result
    if (found == 1) {
        printf("The character '%c' is present in the string.\n", ch);
    } else {
        printf("The character '%c' is not present in the string.\n", ch);
    }

    return 0;
}

/*
In this modified code, the main function takes user input for the string using the scanf function with the format specifier %s. 
It also takes user input for the character using the scanf function with the format specifier %c.

The rest of the code is the same as the previous example. 
It iterates through each character in the string and checks if it is equal to the given character. 
If it is, it sets the found flag to 1 and breaks out of the loop. 
Finally, it prints the result based on the value of the found flag.

Note that the scanf function with the format specifier %s only reads a word (a sequence of non-whitespace characters) from the input. 
If you want to read a whole line (including spaces) from the input, you can use the fgets function instead. 
For example:

fgets(str, sizeof(str), stdin);

This will read a line from the input and store it in the str array, including any spaces. 
The sizeof operator is used to specify the size of the str array. 
The stdin argument is a predefined file pointer that represents the standard input stream.
*/