/*
Write a function SumVector which returns the sum of two nvectors passed to it.
The vectors must be two-dimension.
*/
#include <stdio.h>

struct twoDimVector
{
    int x;
    int y;
};

struct twoDimVector sumVector(struct twoDimVector first, struct twoDimVector second)
{
    int a,b;
    a=first.x + second.x;
    b=first.y + second.y;
    struct twoDimVector result= {a,b};
    return result;
}

int main()
{
    struct twoDimVector v1 = {1, 4};
    struct twoDimVector v2 = {11, 54};

    struct twoDimVector v3 = sumVector(v1, v2);

    printf("%di + %dj", v3.x, v3.y);

    return 0;
}