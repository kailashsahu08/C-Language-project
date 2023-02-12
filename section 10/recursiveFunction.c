/*using recursive function calls to evaluate the following series
x-(x^3/3!)+(x^5/5!)-(x^7/7!)+...*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
float calculation(int x,int n,float add,int t,int j);
void main()
{
    float add=0,sum;
    int t=1,j=1,x,n;
    printf("using recursive function calls to evaluate the following series \nx-(x^3/3!)+(x^5/5!)-(x^7/7!)+...\n");
    printf("\n-----------------------------------------------------------\n\n");
    printf("\nenter the value of x: ");
    scanf("%d",&x);
    printf("\nenter an number up to which you want to calculate :");
    scanf("%d",&n);
    sum=calculation(x,n,add,t,j);/*calculation function call*/
    printf("\nThe sum of the series is: %f",sum);
    getch();
}
int factorial(int t,int fact);/*factorial function declaration*/
float calculation(int x,int n,float add,int t,int j)/*calculation function definition*/
{
    int fact=1;
    if(t%2!=0)
    {
        if(j==n+1)
        {
            return add;
        }
        else if(j%2!=0)
        {
            add=add+(float)pow(x,t)/factorial(t,fact);/*factorial function call*/
            j++;
            t++;
            calculation(x,n,add,t,j);/*recursive calculation function*/
        }
        else
        {
            add=add-(float)pow(x,t)/factorial(t,fact);/*factorial function call*/
            j++;
            t++;
            calculation(x,n,add,t,j);/*recursive calculation function*/
        }
    }
    else
    {
        t++;
        calculation(x,n,add,t,j);/*recursive calculation function*/
    }
}
int factorial(int t,int fact)
{
    fact=fact*t;
    t--;
    if(t==0)
    {
        return fact;
    }
    else
    {
        factorial(t,fact);/*recursive factorial function*/
    }
}
/*end program*/
