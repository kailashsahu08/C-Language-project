/*A student is represent by the following attribute
-roll number
-name
-mark in subject 1
-mark in subject 2
-mark in subject 3*/
#include<stdio.h>
#include<conio.h>
typedef struct
{
    int rollNo;
    char name[20];
    float subject1,subject2,subject3;
}student;/*structure definition*/
void main()
{
    student data[50];/*structure declaration*/
    int i,j;
    float sum,average=0;
    printf("this  program will store the data of 50 student then find the total mark and average mark::\n");
    printf("\n-----------------\t----------------\t------------------\n");
    for(i=0;i<50;i++)/*loop is used for input the data of 50 student*/
    {
        printf("\ndata of %d student",i+1);
        printf("\nRoll no - ");
        scanf("%d",&data[i].rollNo);
        printf("\nName - ");
        scanf("%s",&data[i].name);
        printf("\nmarks in subject 1 -");
        scanf("%f",&data[i].subject1);
        printf("\nmarks in subject 2 -");
        scanf("%f",&data[i].subject2);
        printf("\nmarks in subject 3 -");
        scanf("%f",&data[i].subject3);
    }
    printf("\n\tRoll no.\tName\tTotal mark");
    for(i=0;i<3;i++)/*this loop is used for print the data of 50 student*/
    {
        sum=0;
        sum=data[i].subject1+data[i].subject2+data[i].subject3;
        printf("\n\t%d\t%s\t%.2f",data[i].rollNo,data[i].name,sum);
        average=average+sum;
    }
    average=(float)average/3;
    printf("\n\nThe average of all student is : %.2f",average);
    getch();
}
/*end program*/
