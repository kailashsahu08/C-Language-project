/*write a program to read the price of an item in decimal form and print the output in paisa*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float rupee;
    int paise;
    printf("this program will be convert rupees into paise");
    printf("enter an amount in rupee; ");
    scanf("%f",&rupee);
    paise=rupee*100;
    printf("the amount in paise is :%d",paise);
    getch();
}
