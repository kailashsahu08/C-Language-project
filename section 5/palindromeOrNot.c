/*this program will check whether the given number is palindrome or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int number,reverse=0,digit,i,y;/*the all variable declare and innitialization*/
    printf("this program will check whether the given number is palindrome or not::\n");
    printf("\n-----------------------------------------------------------------------\n");
    printf("enter an number:");
    scanf("%d",&number);/*input the number given by user*/
    y=number;/*now y become the number given by user use for compare with its reverse*/
    for(i=0;number!=0;i++)
    {
       digit=number%10;
       number=number/10;
       reverse=((reverse*10)+digit);/*the number convert in to it's reverse*/
    }
    if(reverse==y)
    {
        printf("\nit is a palindrome number");
    }
    else
    {
        printf("\nit is not a palindrome number");
    }
    getch();
}
/*end program*/
