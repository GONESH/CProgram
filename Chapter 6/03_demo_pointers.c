
#include <stdio.h>
int main()
{
    int i=8;
    int *j;
    j=&i;
    printf("Address i = %u\n",&i);
    printf("Address i = %u\n",j);
    printf("Address j = %u\n",&j);
    printf("Value i = %d\n",i);
    printf("Value i = %d\n",*(&i));
    printf("Value i = %d\n",*j);

    return 0;
}