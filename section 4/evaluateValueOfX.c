/*write a program that will read the value of x and evaluate a function*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    printf("this program will evaluate the value of of x as per condition \n");
    printf("enter a value for x :");
    scanf("%d",&x);
    if(x>0)
    {
        printf("y=1");
    }
    else if(x=0)
    {
        printf("y=0");
    }
    else if(x<0)
    {
        printf("y=-1");
    }
    getch();
}
