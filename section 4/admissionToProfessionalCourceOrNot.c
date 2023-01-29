/*admission to professional course  is subject to the any one of the following condition:
a.marks in mathematics>=60,and marks in physics>=50
b.total in all three subjects>=200
write a program that takes as input the  marks subjects and displays "admitted"if the student admitted else display "not admitted".*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int physics,chemistry,mathematics,totalInThreeSubject;
    printf("this program also find out the given marks is eligible or not for admission in professional course");
    printf("e\nnter the marks in physics; ");
    scanf("%d",&physics);
    printf("\nenter the marks in chemistry: ");
    scanf("%d",&chemistry);
    printf("\n enter the marks in mathematics: ");
    scanf("%d",&mathematics);
    totalInThreeSubject=physics+chemistry+mathematics;
    if(physics>=50&&chemistry>=40&&mathematics>=60||totalInThreeSubject>=200)
    {
        printf("\n   Admitted");
    }
    else
    {
        printf("\n   Admitted");
    }
    getch();
}
