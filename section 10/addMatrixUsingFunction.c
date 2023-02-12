/*write a function using pointer add two matrix and return the resultant matrix.use this function within the main function to add two matrix*/
#include<stdio.h>
#include<conio.h>
void resultMatrix(int *matrix1,int *matrix2,int *matrixSum,int row,int col);/*this function is define for find the sum of matrix*/
void main()
{
    int row,col,i,j;/*variable declaration*/
    printf("::This program will add two matrix using function::");
    printf("\n-------------------------------------------------\n\n");
    printf("enter the number of row of two matrix :");
    scanf("%d",&row);
    printf("\nEnter the number of column of two matrix : ");
    scanf("%d",&col);
    int matrix1[row][col],matrix2[row][col],matrixSum[row][col];/*2d array declaration*/
    printf("\nEnter the %d * %d element of first matrix : ",row,col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&matrix1[i][j]);/*input of all element of first matrix*/
        }
    }
    printf("\nEnter the %d *%d element of second matrix : ",row,col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&matrix2[i][j]);/*input of all element of second matrix*/
        }
    }
    resultMatrix((int *)matrix1,(int *)matrix2,(int *)matrixSum,row,col);/*function calling*/
    printf("\nthe matrix sum of these two matrix are :\n");
}
void resultMatrix(int *matrix1,int *matrix2,int *matrixSum,int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            *((matrixSum+i*col)+j)=*((matrix1+i*col)+j)+*((matrix2+i*col)+j);
        }
    }
    printf("\nThe sum of the two matrix are : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",*((matrixSum+i*col)+j));
        }
        printf("\n");
    }
    getch();
}
/*end program*/
