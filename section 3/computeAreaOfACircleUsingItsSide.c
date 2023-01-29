/*write a program to compute the area of the triangle given its three sides*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float firstSide,secondSide,thirdSide,semiPerimeter,area;
    printf("this program will compute the area of  a triangle using  its three sides\n");
    printf("\nenter the first side of the triangle: ");
    scanf("%f",&firstSide);
    printf("\nenter the second side of the triangle: ");
    scanf("%f",&secondSide);
    printf("\nenter the third side of the triangle: ");
    scanf("%f",&thirdSide);
    semiPerimeter=(firstSide+secondSide+thirdSide)/2;
    area=sqrt(semiPerimeter*(semiPerimeter-firstSide)*(semiPerimeter-secondSide)*(semiPerimeter-thirdSide));
    printf("\nthe area of the triangle is:%f",area);
    getch();
}
