/*
Attempt 10_prac4.c using calloc ()
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n;

    printf("Enter the size of an array:");
    scanf("%d", &n);

    // Allocate memory for n integers using calloc()
    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Error allocating memory.\n");
        return 1;
    }

    // Use the allocated memory
    for (int i = 0; i < n; i++) {
        printf("Enter the value of %d element:", i);
        scanf("%d", &ptr[i]);
    }

    // Increase the size of the allocated memory by 5 using realloc()
    ptr = (int *)realloc(ptr, (n + 5) * sizeof(int));

    if (ptr == NULL) {
        printf("Error reallocating memory.\n");
        return 1;
    }

    // Use the increased memory
    for (int i = n; i < n + 5; i++) {
        printf("Enter the value of %d element:", i);
        scanf("%d", &ptr[i]);
    }

    // Print the values of the increased memory
    for (int i = 0; i < n +5; i++){
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    // Free the allocated memory using free()
    free(ptr);

    printf("Memory freed.\n");
    return 0;
}