/*using pointer ,write a function that receive a character string  and a character as a argument and delete all occurrence of this character  in the string .the function should return the corrected
string with no hole*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void change(char *text,char a);/*this function define for remove the occurence of a character in an a string*/
void main()
{
    char text[100],a;
    printf("enter some text: ");
    gets(text);
    printf("\nEnter which character you want to remove :");
    scanf("%c",&a);
    change(text,a);
    getch();
}
void change(char *text,char a)
{
    int i,n=0;
    char remain[50];
    while(*text!='\0')
    {
        if(*text!=a)
        {
            remain[n]=*text;
            n++;
        }
        text++;
    }
    for(i=0;i<=n;i++)
    {
        printf("%c",remain[i]);
    }

    getch();
}
/*end program/
