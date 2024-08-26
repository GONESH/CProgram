#include <stdio.h>
int main()
{
    int a;
    int p;
    int d;
    char add[50];

    int ag;
    int ph;
    int da;
    char addr[50];

    char n[50];
    char na[50];

    printf("WELCOME TO PHONEBOOK\n\n");

    printf("MENU\n");

    printf("> Press 1 to add the contact\n\n");

    int x;
    printf("Enter\n");
    scanf("%d", &x);

    if (x == 1)
    {
        int y;
        printf("Enter the number of the contact to be added: ");
        scanf("%d", &y);

        if (y == 1)
        {

            printf("-------------------\n");
            printf("Name: ");
            scanf("%s", &n);

            printf("Age: ");
            scanf("%d", &a);

            printf("Phone Number: ");
            scanf("%d", &p);

            printf("Date of Birth: ");
            scanf("%d", &d);

            printf("Address: ");
            scanf("%s", &add);

            printf("-------------------\n");
        }

        else if (y == 2)
        {
            printf("-------------------\n");
            printf("Name: ");
            scanf("%s", &n);

            printf("Age: ");
            scanf("%d", &a);

            printf("Phone Number: ");
            scanf("%d", &p);

            printf("Date of Birth: ");
            scanf("%d", &d);

            printf("Address: ");
            scanf("%s", &add);

            printf("-------------------\n");

            printf("-------------------\n");
            printf("Name: ");
            scanf("%s", &na);

            printf("Age: ");
            scanf("%d", &ag);

            printf("Phone Number: ");
            scanf("%d", &ph);

            printf("Date of Birth: ");
            scanf("%d", &da);

            printf("Address: ");
            scanf("%s", &addr);

            printf("-------------------\n");
        }

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

            if (num == 1)
            {

                printf("-------------------\n");
                printf("Name: ");
                printf("%s\n", n);

                printf("Age: ");
                printf("%d\n", a);

                printf("Phone Number: ");
                printf("%d\n", p);

                printf("Date of Birth: ");
                printf("%d\n", d);

                printf("Address: ");
                printf("%s\n", add);

                printf("-------------------\n");
            }
            else if (num == 2)
            {

                printf("-------------------\n");
                printf("Name: ");
                printf("%s\n", n);

                printf("Age: ");
                printf("%d\n", a);

                printf("Phone Number: ");
                printf("%d\n", p);

                printf("Date of Birth: ");
                printf("%d\n", d);

                printf("Address: ");
                printf("%s\n", add);

                printf("-------------------\n");

                printf("-------------------\n");
                printf("Name: ");
                printf("%s\n", na);

                printf("Age: ");
                printf("%d\n", ag);

                printf("Phone Number: ");
                printf("%d\n", ph);

                printf("Date of Birth: ");
                printf("%d\n", da);

                printf("Address: ");
                printf("%s\n", addr);

                printf("-------------------\n");
            }
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