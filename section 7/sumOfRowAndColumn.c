/*a program that find you the sum of each row and each column of a matrix*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;/*size of row and column variable declaration*/
    printf("\nthis program will find out the sum of each row and each column of a matrix::\n");
    printf("\n------------------------------------------------------------------------------\n");
    printf("enter the number of row and column of a matrix:");
    scanf("%d",&n);
    int matrix[n][n],x,y,z,sumOfRow=0,sumOfColumn=0;/*declaration of variable and 2D array*/
    z=(n*n);
    printf("\nenter %d number of element for store in matrix:\n",z);
    for(x=0;x<n;x++)
    {
        for(y=0;y<n;y++)
        {
            scanf("%d",&matrix[x][y]);/*the element of matrix store*/
        }
    }
    for(x=0;x<n;x++)
    {
        for(y=0;y<n;y++)
        {
           sumOfRow=sumOfRow+matrix[x][y];
           sumOfColumn=sumOfColumn+matrix[y][x];
        }
        printf("\nthe sum of %d row is :%d\nthe sum of %d column is :%d\n",x+1,sumOfRow,x+1,sumOfColumn);
        sumOfRow=0;
        sumOfColumn=0;
    }
    getch();
}
