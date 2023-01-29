/*this program will print he star pattern*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;/*variable of loop declaired*/
    for(i=1;i<=4;i++)
    {
        for(j=3;j>=i;j--)
        {
            printf("\t");/*remove the remaining area using spaces*/
        }
        for(j=1;j<=i;j++)
        {
            printf("*\t");
        }
        for(j=2;j<=i;j++)
        {
            printf("*\t");
        }
        printf("\n");/*this is for making new line after first row*/N
    }
}
/*end program*/
