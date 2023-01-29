/*write a program to input a number and print "ODD" if the number is odd and print "EVEN" if the number is even*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    printf("this program will find out the given number is even or odd\n");
    printf("\nenter an integer number: ");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("\n      EVEN");
    }
    else
    {
        printf("\n     ODD");
    }
    getch();
}
/*end program*/
