/*
Create a two dimensional vector using structures in c
*/

#include <stdio.h>

struct twoDimVector
{
    int x;
    int y;
};

int main()
{
    struct twoDimVector v1 = {1, 4};
    struct twoDimVector v2 = {11, 54};

    printf("%di + %dj", v1.x,v1.y);
    printf("\n");
    printf("%di + %dj", v2.x,v2.y);

    return 0;
}
/*
output:
printf("%di + %dj", v1.x,v1.y);
1i + 4j

printf("%di + %dj", v2.x,v2.y);
11i + 54j

*/