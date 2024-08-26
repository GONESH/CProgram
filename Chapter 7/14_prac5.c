/*
WAP containing a function which reverse the array passed to it.
*/

#include <stdio.h>

int reverse(int a[], int n)
{
    /*
    Swap 0 with n-1
    Swap 1 with n-2
    Swap 2 with n-3
    Swap 3 with n-4
    Swap 4 with n-5
    -
    - Swap i with n-i-1
    -
    till n/2 -1 starting from 0
    -
    */
   int temp;
   for (int i = 0; i < n/2; i++)
   {
    // Swap i with n-i-1
    temp = a[i];
    a[i] = a[n-i-1];
    a[n-i-1] = temp;    
   }
   
}

void display(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, n;
    display(arr,10);
    reverse(arr,10);
    display(arr,10);
    // printf("Enter the number of elements in the array\n");
    // scanf("%d", &n);
    // printf("Enter the elements of the array\n");
    // for (i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    return 0;
}
/*
//For user input
printf("Enter the number of elements in the array\n");
scanf("%d", &n);
printf("Enter the elements of the array\n");
for (i = 0; i < n; i++)
{
    scanf("%d", &arr[i]);
}
*/
