/*an electric board charges the following rates for the use of electricity.
-for the first 200 units:80 paise per unit
-for the next 100 unit:rs.1.30 per unit
-beyond 300 units:rs 2.00 per unit
all user are charge a minimum of rs.100 as meter charge.if the total amount is more that rs.400,then
an additional surcharge of 15% of total  amount.write a program to read the name of a consumer and the
number of  units consumed and print the charge with his/her name.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    char name[30];
    float unit,charge;
    printf("this program will find out your electric bill using your number of unit");
    printf("\nenter the name of the user:");
    gets(name);
    printf("\nenter the number of units:");
    scanf("%f",&unit);
    if(unit<=200)
    {
        charge=(unit*0.80)+100;
        printf("\nname of consumer is %s",name);
        printf("\nthe charge amount is %f",charge);
    }
    else if(unit>200&&unit<=300)
    {
        charge=(unit*1.30)+100;
        printf("\nname of consumer is %s",name);
        printf("\nthe charge amount is %f",charge);
    }
    else if(unit>300)
    {
        charge=(unit*2.0)+100;
        printf("\nname of consumer is %s",name);
        printf("\nthe charge amount is %f",charge);
    }
    if(charge>400)
    {
        charge=charge+((charge*15)/100);
        printf("\nname of consumer is %s",name);
        printf("the charge amount is %f",charge);
    }
    getch();
}
