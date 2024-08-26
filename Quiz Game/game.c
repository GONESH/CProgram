#include <stdio.h>
int main()
{
    int i;
    int ans1, ans2, ans3, ans4, ans5;
    int point1, point2, point3, point4, point5, pont6, point7, point8, point9, point10;
    int point01, point02, point03, point04, point05, point06, point07, point08, point09, point010;
    int total1, total2, total3;

    printf("Welcome to the game\n\n");

    printf("> Press 7 to start the game\n");
    printf("> Press 0 to quit the game\n");

    scanf("%d", &i);

    if (i == 7)
    {
        printf("The game has started \n\n");
    }
    else if (i == 0)
    {
        printf("The game has ended\n\n");
    }
    else
    {
        printf("Invalid\n\n");
    }

    if (i == 7)
    {
        printf("1) Which one is the first search engine in internet?\n\n");
        printf("1) Google \n");
        printf("2) Archie \n");
        printf("3) Wais \n");
        printf("4) AltaVista \n");

        printf("Enter your Answer : ");
        scanf("%d", &ans1);
        if (ans1 == 2)
        {
            printf("Correct Answer\n");
            point1 = 5;
            printf("You have scored %d point\n", point1);
        }
        else
        {
            printf("Wrong Answer\n");
            point1 = 0;
            printf("You have scored %d point\n", point1);
            // point01 = 0;
            // printf("You have scored %d point\n", point01);
        }

        printf("2) Which one is the first Web Browser invented in 1990?\n\n");
        printf("1) Internet Explorer \n");
        printf("2) Mosaic \n");
        printf("3) Mozilla \n");
        printf("4) Nexus \n");

        printf("Enter your Answer : ");
        scanf("%d", &ans2);
        if (ans2 == 4)
        {
            printf("Correct Answer\n");
            point2 = 5;
            printf("You have scored %d point\n", point2);
        }
        else
        {
            printf("Wrong Answer\n");
            point2 = 0;
            printf("You have scored %d point\n", point2);
            // point02 = 0;
            // printf("You have scored %d point\n", point02);
        }

        printf("3) First Computer virus is known as?\n\n");
        printf("1) Rabbit\n");
        printf("2) Creeper Virus \n");
        printf("3) Elk Cloner\n");
        printf("4) SCA Virus \n");

        printf("Enter your Answer : ");
        scanf("%d", &ans3);
        if (ans3 == 2)
        {
            printf("Correct Answer\n");
            point3 = 5;
            printf("You have scored %d point\n", point3);
        }
        else
        {
            printf("Wrong Answer\n");
            point3 = 0;
            printf("You have scored %d point\n", point3);
            // point03 = 0;
            // printf("You have scored %d point\n", point03);
        }

        printf("4) Firewall in computer is used for?\n\n");
        printf("1) Security\n");
        printf("2) Data Transmission \n");
        printf("3) Monitoring\n");
        printf("4) Aunthentication\n");

        printf("Enter your Answer : ");
        scanf("%d", &ans4);
        if (ans4 == 1)
        {
            printf("Correct Answer\n");
            point4 = 5;
            printf("You have scored %d point\n", point4);
        }
        else
        {
            printf("Wrong Answer\n");
            // point04 = 0;
            point4 = 0;
            // printf("You have scored %d point\n", point04);
            printf("You have scored %d point\n", point4);
        }

        printf("5) Which of the following is not a database management software?\n\n");
        printf("1) MySQL\n");
        printf("2) Oracle \n");
        printf("3) Cobal\n");
        printf("4) Sybase\n");

        printf("Enter your Answer : ");
        scanf("%d", &ans5);
        if (ans5 == 3)
        {
            printf("Correct Answer\n");
            point5 = 5;
            printf("You have scored %d point\n", point5);
        }
        else
        {
            printf("Wrong Answer\n");
            // point05 = 0;
            point5 = 0;
            // printf("You have scored %d point\n", point05);
            printf("You have scored %d point\n", point5);
        }


        // total1 = point1 + point2 + point3 + point4 + point5;
        // total2 = point01 + point02 + point03 + point04 + point05;
        // total3= total1 + total2;
        // float average = total3 / 5;
        // float average = total1 / 5;
        // printf("The total you have scored is %d\n\n", total1);
        // printf("The average scored is %.2f\n\n", average);
        int total = point1 + point2 + point3 + point4 + point5;
        float average = total / 5;
        printf("The total you have scored is %d\n\n", total);
        printf("The average scored is %.2f\n\n", average);
        if (total>=20) 
        {
            printf("Congratulation you are brilliant!!\n\n");
        }
        else if (total<20 && total>=15)
        {
            printf("You are in Average category\n\n");
        }
        else if (total<15 && total>=10)
        {
            printf("You can do better\n\n");
        }
        else{
            printf("You have to try harder!");
        }
        
        
        
    }

    return 0;
}