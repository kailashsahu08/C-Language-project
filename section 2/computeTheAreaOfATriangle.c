/*write a program to compute the are of a triangle given its base and height*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float base,height,area;
    printf("this program will find out the area of the triangle by using its base and height\n");
    printf("\nplease enter the base of the triangle: ");
    scanf("%f",&base);
    printf("\nenter the height of that triangle: ");
    scanf("%f",&height);
    area=(1/2.0)*base*height;
    printf("\nthe area of the triangle is :%f",area);
    getch();
}
