/*this program will find out the the length of the string without using the strlen() function*/
#include<stdio.h>
#include<conio.h>
void main()
{
    char name[100],i,count=0;
    printf("::this program will find out the length of the string::\n\n");
    printf("--------------------------------------------------------\n");
    printf("\nenter some character:");
    gets(name);
    for(i=0;i<=100;i++)
    {
        if(name[i]!='\0')
        {
            count++;
        }
        else if(name[i]=='\0')
        {
            break;
        }
    }
    printf("\nthe length of the string %d",count);
    getch();
}
