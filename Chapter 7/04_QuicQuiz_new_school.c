
#include <stdio.h>
int main()
{
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        // printf("Enter the marks of students %d:\n", i); // Will stopt at 4 inputs- when for(int i=1; i<n i++)- to solve put i<=5
        printf("Enter the marks of students %d:\n", i + 1); // i+1 for your index to satart at 1 , When i=0 i<n
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        // printf("The marks scored by student %d is %d \n", i, marks[i]); // Same for here
        printf("The marks scored by student %d is %d \n", i + 1, marks[i]); // i +1 for output to start at 1
    }

    return 0;
}