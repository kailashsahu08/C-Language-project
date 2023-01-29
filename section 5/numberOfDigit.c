/*this program will count the number of digit of a given number*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,digit,count=0;/*variable declaration*/
    printf("::this program will count the number of digit in a given number::\n");
    printf("\n\n--------------------------------------------------------------\n");
    printf("enter the number for calculate its digit:");
    scanf("%d",&n);
    printf("\nthe digit are:");
    for(i=0;n!=0;i++)
    {
        digit=(n%10);
        n=(n/10);
        count++;
        printf("%d ",digit);
    }
    printf("the number of digits are : %d",count);
    getch();
}
/*end program*/
