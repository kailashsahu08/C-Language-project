/*This program will find the transpose of a given matrix*/
#include<stdio.h>
#include<conio.h>
void transpose(int matrix[100][100],int m,int n);/*function definition*/
void main()
{
    int matrix[100][100],row,col,i,j;
    printf("::This program will find out the transport of a given matrix::\n");
    printf("--------------------------------------------------------------\n\n");
    printf("Enter the no of row of an array:");
    scanf("%d",&row);
    printf("\nEnter the no of column of an array:");
    scanf("%d",&col);
    printf("\nEnter %d*%d element of a matrix: ",row,col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    transpose(matrix,row,col);/*Function call*/
}
void transpose(int matrix[100][100],int row,int col)/*function declaration*/
{
    int matrix2[col][row],i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            matrix2[j][i]=matrix[i][j];
        }
    }
    printf("\nThe transpose of the matrix is given by :\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d\t",matrix2[i][j]);
        }
        printf("\n");
    }
    getch();
}
/*End program*/
