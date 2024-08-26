/*
WAP to generate multiplication table of a given number in text format.
Make sure that the file is readable and well formatted.
*/

#include <stdio.h>
#include <stdlib.h>

void generate_multiplication_table(int num) {
    FILE *file;
    char filename[100];

    // Create the filename
    sprintf(filename, "multiplication_table_%d.txt", num);

    // Open the file for writing
    file = fopen(filename, "w");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    // Write the multiplication table to the file
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            fprintf(file, "%d x %d = %d\n", i, j, i * j);
        }
        fprintf(file, "\n");
    }

    // Close the file
    fclose(file);

    printf("Multiplication table generated in %s\n", filename);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    generate_multiplication_table(num);

    return 0;
}
/*
we declare a function generate_multiplication_table that takes an integer num as an argument 
and generates a multiplication table of num in text format. 
The function creates a filename with the format multiplication_table_<num>.txt, 
opens the file for writing using the fopen function, 
and writes the multiplication table to the file using the fprintf function. 
The function then closes the file using the fclose function and prints a message using the printf function.

The main function prompts the user to enter a number using the printf function 
and reads the input using the scanf function. 
It then calls the generate_multiplication_table function with the input number as an argument.

Note that the sprintf function is used to create the filename with the format multiplication_table_<num>.txt. 
The fopen function returns a null pointer if the file cannot be opened. 
In this example, we only check for errors opening the file, 
but you can also check for other errors using the ferror function.




*/