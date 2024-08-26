// Multi-dimension array

#include <stdio.h>
int main()
{
    // int marks[2][4];
    // marks[0][0] = 98;
    // marks[0][1] = 56;
    // marks[0][2] = 67;
    // marks[0][3] = 87;

    // marks[1][0] = 77;
    // marks[1][1] = 54;
    // marks[1][2] = 86;
    // marks[1][3] = 60;

    // printf("Marks of 0 and 0 is %d\n",marks[0][0]);
    // printf("Marks of 0 and 1 is %d\n",marks[0][1]);
    // printf("Marks of 0 and 2 is %d\n",marks[0][2]);
    // printf("Marks of 0 and 3 is %d\n",marks[0][3]);
    // printf("Marks of 1 and 0 is %d\n",marks[1][0]);
    // printf("Marks of 1 and 1 is %d\n",marks[1][1]);
    // printf("Marks of 1 and 2 is %d\n",marks[1][2]);
    // printf("Marks of 1 and 3 is %d\n",marks[1][3]);

    int marks[2][4] = {
        {98, 56, 67, 87},
        {77, 54, 86, 60}
        };

    for (int i = 0; i < 2; i++) // For rows
    {
        for (int j = 0; j < 4; j++) // For columns
        {
            // marks[i][j];
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}