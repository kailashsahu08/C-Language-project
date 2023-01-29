/*a program that find the sum of diagonal elements of a square matrix*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("::this program will calculate the sum of diagonal of a square matrix::\n");
    printf("\n----------------------------------------------------------------------\n");
    printf("\nenter the size of row and column:");
    scanf("%d",&n);
    int matrix[n][n],x,y,z,totalNoOfElement,sumOfDiagonal1=0,sumOfDiagonal2=0,sum;
    totalNoOfElement=(n*n);
    z=n-1;
    printf("\nenter the %d number of element that store in matrix:\n",totalNoOfElement);
    for(x=0;x<n;x++)
    {
        for(y=0;y<n;y++)
        {
            scanf("%d",&matrix[x][y]);
        }
    }
     for(x=0;x<n;x++)
     {
         for(y=0;y<n;y++)
         {
             if(x==y)
             {
                 sumOfDiagonal1=sumOfDiagonal1+matrix[x][y];
             }
             if(y==z)
             {
                 sumOfDiagonal2=sumOfDiagonal2+matrix[x][y];
                 z--;
             }
         }
     }
     printf("\nthe sum of first diagonal is: %d",sumOfDiagonal1);
     printf("\nthe sum of second diagonal is: %d",sumOfDiagonal2);
     sum=sumOfDiagonal1+sumOfDiagonal2;
     printf("\nthe sum of two diagonal is: %d",sum);
     getch();
}
