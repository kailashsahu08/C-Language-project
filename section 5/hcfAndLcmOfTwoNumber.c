/*this program will find out the h.c.f and l.c.m of given two number*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int firstNumber,secondNumber,Hcf,Lcm,i;/*declaration of all variable*/
    printf("this program will find out the L.C.M and H.C.F of given two number::");
    printf("\n\n----------------------------------------------------------------\n");
    printf("enter two number :");
    scanf("%d%d",&firstNumber,&secondNumber);/*input two number*/
    if(firstNumber>secondNumber)
    {
        for(i=1;i<=secondNumber;i++)
        {
            if(firstNumber%i==0 && secondNumber%i==0)
            {
                Hcf=i;/*at last we find the highest common factor*/
            }
        }
        Lcm=(Hcf*(firstNumber/Hcf)*(secondNumber/Hcf));/*here we get lowest common multiple*/
    }
    else
    {
        for(i=1;i<=secondNumber;i++)
        {
            if(firstNumber%i==0 && secondNumber%i==0)
            {
                Hcf=i;/*at last we find the highest common factor*/
            }
        }
        Lcm=(Hcf*(firstNumber/Hcf)*(secondNumber/Hcf));/*here we get lowest common multiple*/
    }
    printf("\nthe H.C.F of given two number is: %d\nthe L.C.M of given two number is: %d",Hcf,Lcm);
    getch();
}
/*end program*/
