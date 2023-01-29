/*write a programme that takes the radious of a circle and display it area and perimeter*/
#include<stdio.h>
#include<conio.h>
#define pi 3.141
void main()
{
    float radious,area,perimeter;
    printf("this programme find out the area and perimeter of a circle by using its radious\n");
    printf("\nplease enter the radious of the circle: ");
    scanf("%f",&radious);
    perimeter=2*pi*radious;
    area=pi*radious*radious;
    printf("\nthe perimeter of the circle:%f",perimeter);
    printf("\nthe area of the circle is:%f",area);
    getch();
}
