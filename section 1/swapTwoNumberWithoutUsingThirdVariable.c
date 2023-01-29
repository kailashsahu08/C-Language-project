/*write a programme to swap two number without using third variable*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("this programme will swap your two number which two number given\n");
    printf("before swap\n ");
    printf("enter two number:");
    scanf("%d""%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap\n");
    printf("the two no will be:%d %d",a,b);
    getch();
}
