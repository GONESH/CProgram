// Passing arrays to function
#include <stdio.h>

void func(int *); //function prototype

void printArray(int *i, int n);

void printArray(int i[], int n);

int main()
{
    int arr[3] = {1, 2, 4};
    func(arr); //function call
     for (int i = 0; i < 3; i++)
    {
        
        printf("The value of marks[%d]is %d\n", i,arr[i]);
    }


    return 0;
}
void func(int *ptr){ //function difination
    for (int i = 0; i < 3; i++)
    {
        *ptr=56;
        ptr++;
        //printf("The value of marks[%d]is %d\n", i,*(ptr++));
    }
    
}