/*this program will print the following number pattern*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;/*variable of loop declaired*/
    for(i=4;i>=1;i--)
    {
        for(j=3;j>=i;j--)
        {
            printf("\t");/*remove the remaining area using spaces*/
        }
        for(j=i;j>=1;j--)
        {
            printf("%d\t",j);
        }
        for(j=2;j<=i;j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}
/*end program*/
