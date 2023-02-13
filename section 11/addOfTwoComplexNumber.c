/*This program create a structure COMPLEX to represent a complex number and find the sum of two complex number  and display their sum*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
typedef struct/*structure definition*/
{
    int realNumber;
    int imaginaryNumber;
}COMPLEX;
void main()
{
    COMPLEX number[2];/*structure array declare*/
    int sum1,sum2;
    printf("::This program will find the sum of two complex number::\n");
    printf("\n-------------------------------------------------------\n");
    printf("Enter the real number of first complex number : ");
    scanf("%d",&number[0].realNumber);
    printf("\nEnter the imaginary number of first complex number : ");
    scanf("%d",&number[0].imaginaryNumber);
    printf("\nEnter the real number of second complex number : ");
    scanf("%d",&number[1].realNumber);
    printf("\nEnter the imaginary number of second complex number : ");
    scanf("%d",&number[1].imaginaryNumber);
    sum1=number[0].realNumber+number[1].realNumber;
    sum2=number[0].imaginaryNumber+number[1].imaginaryNumber;
    printf("\nThe first complex number are : %d+%di",number[0].realNumber,number[0].imaginaryNumber);
    printf("\nThe second complex number are : %d+%di",number[1].realNumber,number[1].imaginaryNumber);
    printf("\nThe sum of the two complex are : %d+%di",sum1,sum2);
    getch();
}
/*end program*/
