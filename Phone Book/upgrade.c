#include <stdio.h>

/*
name--> COntact--> DOB--->Age--->Address-->
option to enter as many contact as we want
*/

int main()
{
    int n;
    char name[50];
    int age;
    int phNo;
    int date;
    char add[50];
    int i;
    printf("Welcome to Phone book\n\n");
    printf("MENU\n");
    printf("> Press 1 to add the contact\n\n");
    int x;
    printf("Enter here:\n");
    scanf("%d", &x);
    if (x == 1)
    {
        printf("Enter the number of contact to be added:");
        scanf("%d", &n);
        printf("------------------\n");
        for ( i = 0; i < n; i++)
        {
            printf("Name: ");
            scanf("%s", &name);

            printf("Age: ");
            scanf("%d", &age);

            printf("Phone Number: ");
            scanf("%d", &phNo);

            printf("Date of Birth: ");
            scanf("%d", &date);

            printf("Address: ");
            scanf("%s", &add);
        }
        printf("------------------\n");

        printf("Press 2 to see the entered contacts\n\n");
        printf("Press 3 to exit the phone book\n\n");

        int z;
        printf("Enter\n");
        scanf("%d", &z);

        if (z == 2)
        {
            int num;
            printf("Enter the number of contacts to be viewed :");
            scanf("%d", &num);
            printf("------------------\n");
            for (int j = 0; j < i; j++)
            {
                printf("Name: ");
                printf("%s\n", name);

                printf("Age: ");
                printf("%d\n", age);

                printf("Phone Number: ");
                printf("%d\n", phNo);

                printf("Date of Birth: ");
                printf("%d\n", date);

                printf("Address: ");
                printf("%s\n", add);
            }
            printf("------------------");
        }
        else if (z == 3)
        {
            printf("Are you sure you want to close the phonebook\n");
            printf("> Press 1 for Yes\n");
            printf("> Press 2 for No\n");

            int ans;
            printf("Enter:\n");
            scanf("%d", &ans);

            if (ans == 1)
            {
                printf("The phone book has been closed\n");
                printf("Have a good day\n");
            }
            else if (ans == 1)
            {
                printf("The phone book is still open, check contact\n");
                printf("You can continue\n");
            }
        }
    }
    else
    {
        printf("In-Valid");
    }
    return 0;
}