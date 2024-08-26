/*
WAP to chaech whether a given character is present in a string or not.
*/
#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    char ch = 'l';
    int found = 0;

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
In this program, the main function defines a string str with the value "Hello, World!", 
and a character ch with the value 'l'. 
It initializes a variable found to 0.

The program then iterates through each character in the string using a for loop. 
For each character, it checks if it is equal to the given character ch. 
If it is, it sets the found flag to 1 and breaks out of the loop.

Finally, the program prints the result based on the value of the found flag. 
If the flag is 1, it means that the given character is present in the string. 
Otherwise, it means that the given character is not present in the string.

You can modify the str and ch variables to check whether any character is present in any string.
*/