/*write a program to take a number as input and check whether it is even or odd using conditional operator*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    printf("this program will check whether the given number is even or odd\n");
    printf("\nenter an integer number: ");
    scanf("%d",&x);
    x%2==0?printf("\n   EVEN"):printf("\n  ODD");
    getch();
}
