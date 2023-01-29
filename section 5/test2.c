/*test*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int number,dig1,j,dig2,sum1=0,sum2=0,sum3=0;
    printf("enter an number:");
    scanf("%d",&number);
    while(number!=0)
    {
        dig1=number%10;
        number=number/10;
        j=number;
        dig2=number%10;
        number=number/10;
        sum1=sum1+(dig1*dig2);
        if(dig1%2==0 && dig2%2!=0)
        {
            sum2=sum2+(dig1*dig2);
        }
        if(dig1%2!=0 && dig1%3!=0 && dig2%2==0 &&dig2%4!=0)
        {
            sum3=sum3+(dig1*dig2);
        }
        number=j;
    }
    printf("\n1.the product of sum of consecutive digit are : %d",sum1);
    printf("\n2.the product of sum of consecutive digit are : %d",sum2);
    printf("\n3.the product of sum of consecutive digit are : %d",sum3);
    getch();
}
