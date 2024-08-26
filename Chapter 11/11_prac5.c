/*
Create an array of multiplication table of 7 upto 10 (7 X 10=70).
Use realloc() to make it store 15 numbers (From 7X1 to 7X15)
*/

#include <stdio.h>
#include <stdlib.h>

void print_multiplication_table(int num, int *table) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= 15; j++) {
            table[i * 15 - 15 + j - 1] = i * j;
            printf("%d x %d = %d\n", i, j, table[i * 15 - 15 + j - 1]);
        }
        printf("\n");
    }
}

int main() {
    int *table;
    int num = 7;

    // Allocate memory for 15 integers using malloc()
    table = (int *)malloc(15 * sizeof(int));

    if (table == NULL) {
        printf("Error allocating memory.\n");
        return 1;
    }

    // Use the allocated memory
    print_multiplication_table(num, table);

    // Increase the size of the allocated memory by 8 using realloc()
    table = (int *)realloc(table, (num + 8) * 15 * sizeof(int));

    if (table == NULL) {
        printf("Error reallocating memory.\n");
        return 1;
    }

    // Use the increased memory
    print_multiplication_table(num + 8, table);

    // Free the allocated memory using free()
    free(table);

    printf("Memory freed.\n");

    return 0;
}