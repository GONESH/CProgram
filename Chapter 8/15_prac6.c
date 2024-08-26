/*
WAP to encrypt a string by adding 1 to the ASCII value of its character.
*/

#include <stdio.h>
int main()
{
    char name[] = "Thapa";
    for (int i = 0; i < 5; i++)
    {
        name[i]++;
    }
    printf("The string is %s", name);
    return 0;
}
/*
Output:
The string is Uibqb
--The forloop in the main function increments each charater of the
string 'name' by 1;
--The string name is initialized with the value "Thapa". 
The for loop iterates from 0 to 4 (since the length of the string is 5), 
and for each iteration, 
it increments the character at position i by 1.

Note that incrementing a character by 1 changes it to the next character in the ASCII table. 
For example, the ASCII value of 'T' is 84, and the ASCII value of 'U' is 85. 
Therefore, incrementing 'T' by 1 changes it to 'U'. 
Similarly, incrementing 'h' by 1 changes it to 'i', and so on.

**
If you want to increment each character by a different value, you can modify the for loop as follows:
for (int i = 0; i < 5; i++)
{
    name[i] += i;
}
--This will increment the first character by 0, 
the second character by 1, 
the third character by 2, and so on.
*/