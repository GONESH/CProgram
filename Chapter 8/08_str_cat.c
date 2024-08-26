
/*
strcat()- is used to concatenate two strings
*/

#include<stdio.h>
#include<string.h>
int main ()
{
    char source[]="Thapa ";
    char target[40]="Gonesh the  boy who lived yesterday!";
    
    strcat(source,target);

    // source= source+ target //Roughly
    
    
    // printf("The final string is %s\n",source);
    printf("The final string is %s\n",target);
   
    
    return 0;
}