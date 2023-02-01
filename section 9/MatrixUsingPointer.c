/*A program  using pointer input a 4*5 matrix and display it */
#include<stdio.h>
#include<conio.h>
void main()
{
    int matrix[4][5],i,j;/*2d array declare and some variable of loop also declare*/
    printf("This program will display a 4*5 matrix using pointer");
    printf("\n---------------------------------------------------\n\n");
    printf("enter 20 element that input in a 4*5 matrix : ");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",((matrix+i)+j));/*the element of array input*/
        }
    }
    printf("\nthe 4*5 is shown as : \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d\t",*(*(matrix+i)+j));/*print the matrix*/
        }
        printf("\n");
    }
}
/*end program*/
