/*write a program to read a four digit integer and print the sum of its digit*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,x,y,s,n;
    printf("this program will find the sum of digit of four digit number\n");
    printf("\nenter an four digit number: ");
    scanf("%d",&n);
    a=n/10;
    x=n%10;
    b=x/10;
    y=x%10;
    c=y/10;
    d=y%10;
    s=a+b+c+d;
    printf("1stdigit %d,2nddigit %d,3rddigit %d and 4thdigit %d their sum is %d",a,b,c,d,s);
    getch();

}
