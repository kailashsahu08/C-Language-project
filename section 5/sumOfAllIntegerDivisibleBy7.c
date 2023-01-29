/*this program will find the number of and sum of all integer greater than 100 and less than 200 that are divisible by 7*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int number,count=0,sum=0;/*variable declaration*/
    printf("this program will find the number of and sum of all integer greater than 100 and less than 200 that are divisible by 7");
    for(number=100;number<=200;number++)
    {
        if(number%7==0)
        {
            count++;
            sum=sum+number;
        }
    }
    printf("\nthere are %d number present that divisible by 7 between 100 to 200\nand the sum of that integer are: %d",count,sum);
    getch();
}
/*end program*/
