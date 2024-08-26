/*
realloc - re allocation of memory.

used to allocate memory of new size using the previous pointer and size.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n = 5;

    // Allocate memory for n integers using malloc()
    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Error allocating memory.\n");
        return 1;
    }

    // Use the allocated memory
    for (int i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }

    // Print the values of the allocated memory
    for (int i = 0; i < n; i++) {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    // Increase the size of the allocated memory by 5 using realloc()
    ptr = (int *)realloc(ptr, (n + 5) * sizeof(int));

    if (ptr == NULL) {
        printf("Error reallocating memory.\n");
        return 1;
    }

    // Use the increased memory
    for (int i = n; i < n + 5; i++) {
        ptr[i] = i + 1;
    }

    // Print the values of the increased memory
    for (int i = n; i < n + 5; i++) {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    // Free the allocated memory using free()
    free(ptr);

    printf("Memory freed.\n");

    return 0;
}
/*
we declare an integer pointer ptr and an integer variable n with the value 5. 
We allocate memory for n integers using the malloc() function. 
We check if the memory allocation is successful using an if statement. 
If the memory allocation is not successful, we print an error message and return an error code.

We then use the allocated memory by assigning values to the elements of the ptr array. 
We print the values of the allocated memory using a for loop.

After using the allocated memory, we increase the size of the allocated memory by 5 using the realloc() function. 
We check if the memory reallocation is successful using an if statement. 
If the memory reallocation is not successful, we print an error message and return an error code.

We then use the increased memory by assigning values to the new elements of the ptr array. 
We print the values of the increased memory using a for loop.

After using the increased memory, we free the allocated memory using the free() function. 
We then print a message using the printf() function to indicate that the memory has been freed.

Note that the realloc() function can change the address of the allocated memory if the new size is larger than the old size. 
Therefore, it is important to assign the return value of the realloc() function to the original pointer variable 
to ensure that the pointer points to the new location of the allocated memory.

Also note that the realloc() function can cause a memory leak if the memory reallocation is not successful 
and the original pointer variable is not freed. 
Therefore, it is important to check if the memory reallocation is successful before using the increased memory.
*/