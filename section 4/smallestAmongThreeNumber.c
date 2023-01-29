/*write program to input three number and find out the smallest*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("this program will find out the smallest among three number \n");
    printf("\nenter a first integer number: ");
    scanf("%d",&a);
    printf("\nenter second integer number: ");
    scanf("%d",&b);
    printf("\nenter third integer number: ");
    scanf("%d",&c);
    if(a<b&&a<c)
    {
        printf("\nthe smallest  number is: %d ",a);
    }
    else if(b<c)
    {
        printf("\nthe smallest number is %d",b);
    }
    else
    {
        printf("\nthe smallest number is %d",c);
    }
    getch();
}
/*end program*/
