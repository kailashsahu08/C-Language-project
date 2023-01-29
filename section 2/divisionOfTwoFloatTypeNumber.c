/*write a program  that request two float type number from user and then devide the first number by second and display the the result along with the number*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float firstNumber,secondNumber,division;
    printf("\nthis programme will be find out the division of two float type number\n");
    printf("\nenter the float type number number:");
    scanf("%f",&firstNumber);
    printf("\nenter another float type number: ");
    scanf("%f",&secondNumber);
    division=firstNumber/secondNumber;
    printf("\nthe division of %f and %f is %f",firstNumber,secondNumber,division);
    getch();
}
