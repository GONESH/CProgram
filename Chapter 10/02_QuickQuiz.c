/*
WAP to check whether the file exist or not before opening the file.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];

    printf("Enter the filename: ");
    scanf("%s", filename);

    // Try to open the file
    file = fopen(filename, "r");

    // Check if the file exists
    if (file == NULL) {
        printf("The file does not exist.\n");
    } else {
        printf("The file exists.\n");

        // Close the file
        fclose(file);
    }

    return 0;
}
/*
we declare a FILE pointer file and a character array filename to store the filename. 
We prompt the user to enter the filename using the printf function and read the input using the scanf function.

We then try to open the file using the fopen function with the "r" mode, which opens the file for reading. 
If the file does not exist, the fopen function returns a null pointer, which we check using the if statement.

If the file exists, we print a message using the printf function and close the file using the fclose function. 
If the file does not exist, we print a message using the printf function.

Note that the fopen function returns a null pointer if the file does not exist or if there is an error opening the file. 
In this example, we only check if the file does not exist, but you can also check for other errors using the ferror function.
*/