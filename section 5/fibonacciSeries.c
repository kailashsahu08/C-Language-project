/*this program that an numbers an integer 'n' as input  and print the fibonacci series up to 'n' as input print the fibonacci series up to 'n'*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,number,oddPosition=1,evenPosition=1,sum=0;/*variable declaration and initialization*/
    printf("::this program will determine the fibonacci::");
    printf("\nenter a number up to which yow want to find the series : ");
    scanf("%d",&number);
    printf("\nthe fibonacci series are: %d %d",oddPosition,evenPosition);
    for(i=1;i<number-1;i++)
    {
        sum=sum+(oddPosition+evenPosition);/*calculate third digit*/
        printf(" %d",sum);
            oddPosition=evenPosition;
            evenPosition=sum;
            sum=0;
    }
    getch();
}
/*end program*/
