/*this program will check whether the given number is armstrong or not or not*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,i,digit,number,sum=0;/* variable declaration and initialization*/
    printf("::this number will check whether the given number is armstrong or not::\n");
    printf("\n---------------------------------------------------------------------\n\n");
    printf("Enter a number: ");
    scanf("%d",&n);
    number=n;
    for(i=1;n!=0;i++)
    {
        digit=n%10;/*find out the digit of the number*/
        sum=sum+pow(digit,3);/*the cube of digit calculate*/
        n=n/10;
    }
    if(sum==number)
    {
        printf("\nthis is an armstrong number  ");
    }
    else
    {
        printf("\nthis is not an armstrong number ");
    }
    getch();
}
/*end program*/
