/*write a program and input a character  and check whether it is upper case or lower case using conditional operator*/
#include<stdio.h>
#include<conio.h>
void main()
{
    char alphabet;
    printf("this program also find the upper case and lower case alphabet using a alphabet\n");
    printf("\nenter an alphabet: ");
    scanf("%c",&alphabet);
    alphabet>=65&&alphabet<90?printf("\n %c is an upper case alphabet",alphabet):printf("\n %c is a lower case alphabet",alphabet);
    getch();
}
