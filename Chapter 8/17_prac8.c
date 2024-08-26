/*
WAP to count the occurence of a given charater in a string.
*/

#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    char ch = 'l';
    int count = 0;

    // Iterate through each character in the string
    for (int i = 0; str[i]!= '\0'; i++) {
        // Check if the current character is equal to the given character
        if (str[i] == ch) {
            // Increment the count
            count++;
        }
    }

    // Print the count
    printf("The character '%c' occurs %d times in the string.\n", ch, count);

    return 0;
}
/*
In this program, the main function defines a string str with the value "Hello, World!", 
and a character ch with the value 'l'. 
It initializes a variable count to 0.

The program then iterates through each character in the string using a for loop. 
For each character, it checks if it is equal to the given character ch. 
If it is, it increments the count variable.

Finally, the program prints the count of the given character in the string.

You can modify the str and ch variables to count the occurrence of any character in any string.
*/
