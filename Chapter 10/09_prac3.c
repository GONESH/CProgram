/*
WAP to read a text file character by character and 
write its content twice in separate file.
*/

#include <stdio.h>
#include <stdlib.h>

void read_file(char *filename) {
    FILE *file;
    char ch;
    char filename1[100];
    char filename2[100];

    // Create the filenames
    sprintf(filename1, "%s_copy1.txt", filename);
    sprintf(filename2, "%s_copy2.txt", filename);

    // Open the input file for reading
    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error opening the input file.\n");
        return;
    }

    // Open the output files for writing
    FILE *file1 = fopen(filename1, "w");
    FILE *file2 = fopen(filename2, "w");

    if (file1 == NULL || file2 == NULL) {
        printf("Error opening the output files.\n");
        fclose(file);
        return;
    }

    // Read the input file character by character
    while ((ch = fgetc(file))!= EOF) {
        // Write the character to the first output file
        fputc(ch, file1);

        // Write the character to the second output file
        fputc(ch, file2);
    }

    // Close the input file
    fclose(file);

    // Close the output files
    fclose(file1);
    fclose(file2);

    printf("File content copied to %s and %s\n", filename1, filename2);
}

int main() {
    char filename[100];

    printf("Enter the filename: ");
    scanf("%s", filename);

    read_file(filename);

    return 0;
}
/*
we declare a function read_file that takes a character array filename as an argument 
and reads the content of the file with the given filename character by character and 
writes it to two separate files. 
The function creates two filenames with the formats <filename>_copy1.txt and <filename>_copy2.txt, 
opens the input file for reading using the fopen function, 
and opens the output files for writing using the fopen function. 
The function then reads the input file character by character using the fgetc function 
and writes the character to the output files using the fputc function. 
The function closes the input and output files using the fclose function 
and prints a message using the printf function.

The main function prompts the user to enter a filename 
using the printf function and reads the input using the scanf function. 
It then calls the read_file function with the input filename as an argument.

Note that the sprintf function is used to create the filenames 
with the formats <filename>_copy1.txt and <filename>_copy2.txt. 
The fopen function returns a null pointer if the file cannot be opened. 
In this example, we only check for errors opening the input file, 
but you can also check for other errors using the ferror function.
*/