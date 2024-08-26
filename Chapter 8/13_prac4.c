/*
Write a function slice() to slice a string.
It should change the original string such that it is now the slice string.
Take 'm' and 'n' as the start and ending position for slice.
*/
#include <stdio.h>
#include <string.h>

void slice(char *s, int m, int n) {
    // Check if the start and end positions are valid
    if (m < 0 || n > strlen(s) || m > n) {
        printf("Invalid start or end position\n");
        return;
    }

    // Move the characters from the end position to the start position
    for (int i = m; i < n; i++) {
        s[i - m] = s[i];
    }

    // Add a null character at the end of the sliced string
    s[n - m] = '\0';
}

int main() {
    char s[] = "Hello, World!";
    slice(s, 2, 5);
    printf("%s\n", s);  // Output: "llo, World!"

    return 0;
}