/*rewrite the program experiment 2.2.however rename the data types 'float' to 'decimal' and 'int' to 'integer' by using type def statement*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    typedef int integer;
    typedef float Decimal;
    integer principal;
    Decimal rateOfInterest,time,simpleInterest,compoundInterest;
    printf("this program will find out the simple interest and compound interest\n");
    printf("\nenter the principal amount: ");
    scanf("%d",&principal);
    printf("\nenter the rate of interest:");
    scanf("%f",&rateOfInterest);
    printf("\nenter the time(in year):");
    scanf("%f",&time);
    simpleInterest=(principal*rateOfInterest*time)/100;
    compoundInterest=(principal*(pow(1+(rateOfInterest/100),time)))-principal;
    printf("\nthe simple interest is: %f",simpleInterest);
    printf("\nthe compound interest is: %f",compoundInterest);
    getch();
}
