/*
write your own version of strcpy function from <string.h>
*/

#include <stdio.h>
#include <string.h>

void myStrCpy(char *dest, char *src) {
    // Copy the characters from the source string to the destination string
    while (*src!= '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    // Add a null character at the end of the destination string
    *dest = '\0';
}

int main() {
    char src[] = "thapagoneshmagarkumar";
    char dest[100];

    // Copy the source string to the destination string
    myStrCpy(dest, src);

    // Print the destination string
    printf("The copied string is: %s\n", dest);

    return 0;
}