/*a program that takes as input an integer 'n' and compute the fallowing series
1-(2/3!)+(3/4!)-(4/5!)+-------+(n/(n+1)!).*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,fact=2;
    float sum=1.0000000;
    printf("this program that takes as input an integer 'n' and compute the fallowing series\n1-(2/3!)+(3/4!)-(4/5!)+-------+(n/(n+1)!)");
    printf("\n\n----------------------------------------------------------------------------\n");
    printf("enter the number up to which you want to calculate :");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        fact=fact*(i+1);/*find the factorial of 'n+1'th term*/
        if(i%2==0)
        {
            sum=(sum-((float)i/fact));
        }
        else
        {
            sum=(sum+((float)i/fact));/*type spacing is used for convert into floating number*/
        }
    }
    printf("the sum of series are: %f",sum);
    getch();
}
