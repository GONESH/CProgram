#include <stdio.h>
int main()
{
    int n, m, a;
    int Exit;
    int Exi;

    printf("Welcome to Mordern Periodic Table\n\n");

    printf("> Enter 1 to know about element\n\n");
    printf("> Enter 2 to close periodic table\n\n");

    printf("ENTER:\n");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("> Press 3 to search the element by atomic number\n\n");
        printf("ENTER:\n");
        scanf("%d", &m);

        if (m == 3)
        {
            printf("Enter the atomic number of the element to be searched :");
            scanf("%d", &a);

            if (a == 1)
            {
                printf("Name: Hydrogen\n");
                printf("Symbol: H\n");
                printf("Atomic Number: 1\n");
                printf("Electronic Configuration: 1s^1\n");
                printf("Discovered By: Henry Cavendish\n");
                printf("Charge: +1\n");
            }
        }
    }
    else if (n == 2)
    {
        printf("Do you want to exit? (Yes/No)\n");
        printf("> Press 6 for Yes\n");
        printf("> Press 7 for No\n");

        printf("ENTER:\n");
        scanf("%d", &Exit);

        if (Exit == 6)
        {
            printf("Are you sure! You want to close the periodic table? (Yes/No)\n");
            printf("> Press 4 for Yes\n");
            printf("> Press 5 for No\n");

            printf("ENTER:\n");
            scanf("%d", &Exit);

            if (Exi == 4)
            {
                printf("Mordern periodic table closed!!\n\n");
            }
            else if (Exi == 5)
            {
                printf("Mordern periodic table is still open and you can continue learning about elements!!\n\n");

                printf("Enter the atomic number of the element to be searched:\n");
                scanf("%d", &a);

                if (a == 2)
                {
                    printf("Name: Helium\n");
                    printf("Symbol: He\n");
                    printf("Atomic Number: 2\n");
                    printf("Electronic Configuration: 1s^2\n");
                    printf("Discovered By: Pierre Janssen & Norman Lockyer\n");
                    printf("Charge: 0\n");
                }
            }
        }
        else if (Exit == 7)
        {
            printf("Periodic table is not closed and you can continue to learn more about elements\n\n");

            printf("Enter the atomic number of the element to be searched:\n");
            scanf("%d", &a);

            if (a == 3)
            {
                printf("Name: Lithium\n");
                printf("Symbol: Li\n");
                printf("Atomic Number: 3\n");
                printf("Electronic Configuration: 1s^22s^1\n");
                printf("Discovered By: Johar August Arfvedson\n");
                printf("Charge: +1\n");
            }
        }
    }

    return 0;
}