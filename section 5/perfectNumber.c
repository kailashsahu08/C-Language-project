/*this program will check whether the given number is perfect or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int number,i,sum=0;/*variable initialization and declaration*/
    printf("\nthis program will check whether the given number is perfect or not::");
    printf("\n--------------------------------------------------------------------\n\n");
    printf("enter a number :");
    scanf("%d",&number);/*input the given number*/
    for(i=1;i<number;i++)
    {
        if(number%i==0)
        {
            sum=sum+i;/*added the all divisor*/
        }
    }
    if(sum==number)
    {
        printf("\nit is a perfect number");
    }
    else
    {
        printf("\nit is not a perfect number");
    }
}
/*End program*/
