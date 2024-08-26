/*
Solve proble 07_prac1.c using calloc

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *pt;
    int n;

    printf("Enter the size of an array:");
    scanf("%d", &n);

    // Allocate memory for n integers using calloc()
    pt = (int *)calloc(n, sizeof(int));

    if (pt == NULL) {
        printf("Error allocating memory.\n");
        return 1;
    }

    // Use the allocated memory
    for (int i = 0; i < n; i++) {
        printf("Enter the value of %d element:", i);
        scanf("%d", &pt[i]);
    }

    // Print the values of the allocated memory
    for (int i = 0; i < n; i++) {
        printf("The value at %d is %d\n", i, pt[i]);
    }

    // Free the allocated memory using free()
    free(pt);

    printf("Memory freed.\n");

    return 0;
}