/*
Use a while loop to reverse some numbers:
*/

#include <stdio.h>
int main()
{
    // A variable with some specific numbers
    int numbers = 12345;
    printf("The number before reverse is %d\n", numbers);

    // A variable to store the reversed number
    int revNumbers = 0;

    // Reverse and reorder the numbers
    while (numbers)
    {
        // Get the last number of 'numbers' and add it to 'revNumber'
        revNumbers = revNumbers * 10 + numbers % 10;
        // Remove the last number of 'numbers'
        numbers /= 10;
        printf("The number after reverse is %d\n", revNumbers);
    }
    return 0;
}