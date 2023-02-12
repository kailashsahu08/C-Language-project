/*this program will determine whether a year is leap year or  not */
#include<stdio.h>
#include<conio.h>
void LeapYear(int year)/*function definition*/
{
    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("\nit is a leap year");
        }
        else
        {
            printf("\nit is not a leap year");
        }
    }
    else
    {
        if(year%4==0)
        {
            printf("\nit is a leap year");
        }
        else
        {
            printf("\nit is not a leap year");
        }
    }
}
void LeapYear(int year);/*function declaration*/
void main()
{
    int year;/*variable declaration*/
    printf("::this program will determine a given year is leap year not::");
    printf("\n-----------------------------------------------------------\n\n");
    printf("enter a year : ");
    scanf("%d",&year);
    LeapYear(year);/*function call*/
}
/*end program*/
