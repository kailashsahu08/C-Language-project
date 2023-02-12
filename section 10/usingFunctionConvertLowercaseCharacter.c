/*This program will take a string as input and convert its all lowercase character to its upper case equivalent*/
#include<stdio.h>
#include<conio.h>
void uppercase(char Latter[]);/*function declaration*/
void main()
{
    char Latter[100];
    printf("This program will take a string as input and convert its all lowercase character to its upper case equivalent\n");
    printf("\n------------------------------------------------------------------------------------\n\n");
    printf("enter some text:");
    gets(Latter);/*input string*/
    uppercase(Latter);/*function calling*/
}
void uppercase(char Latter[])/*function definition */
{
    int i;
    for(i=0;Latter[i]!='\0';i++)
    {
        if(Latter[i]>='a' && Latter[i]<='z')
        {
            Latter[i]=(int)Latter[i]-32;/* convert all lowercase into uppercase */
        }
    }
    printf("\nThe text in uppercase latter are:");
    puts(Latter);/*print the string in upper case latter */
    getch();
}
/*End program */
