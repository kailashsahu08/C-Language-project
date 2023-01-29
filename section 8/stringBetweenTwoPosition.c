/*a program that will find the string between two number*/
#include<stdio.h>
#include<conio.h>
void main()
{
    char text[50];/*declare of string*/
    int n1,i,n2,p,q;/*declaration of some lop variable*/
    printf("this program will find text between two position using a string\n\n");
    printf("\n---------------------------------------------------------------\n");
    printf("enter some text that will input in the string: ");/*input of string*/
    gets(text);
    printf("\nenter the position of string from which the text will be printed: ");/*input of first position*/
    scanf("%d",&n1);
    printf("\nenter the position of string to which the string will be printed: ");/*input of second position*/
    scanf("%d",&n2);
    printf("\nthe text are:");
    p=n1-1;
    q=n2-1;
    for(i=0;i<50;i++)
    {
        if(i>=p&&i<=q&&n1<n2)
        {
            printf("%c",text[i]);
        }
    }
    getch();
}
/*end program*/
