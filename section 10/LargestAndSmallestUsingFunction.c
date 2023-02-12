/*This program will find out the Largest , smallest ,2nd largest and 2nd smallest*/
#include<stdio.h>
#include<conio.h>
void sort(int matrix[100][100],int m,int n);
void main()
{
    int matrix[100][100],m,n,i,j;
    printf("This program will find out the Largest , smallest ,2nd largest and 2nd smallest::\n");
    printf("\n------------------------------------------------------------------------------\n\n");
    printf("\nEnter the no of row of an array : ");
    scanf("%d",&m);
    printf("\nEnter the no of column of an array: ");
    scanf("%d",&n);
    printf("\nEnter %d * %d element of an array :",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    sort(matrix,m,n);
}
void sort(int matrix[100][100],int m,int n)
{
    int i,j,k,l,swap;
    for(k=0;k<m;k++)
    {
        for(l=0;l<n;l++)
        {
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(matrix[k][l]>matrix[i][j])
                    {
                        swap=matrix[k][l];
                        matrix[k][l]=matrix[i][j];
                        matrix[i][j]=swap;
                    }
                }
            }
        }
    }
    printf("\nThe largest number is : %d\nThe second largest number is : %d",matrix[0][0],matrix[0][1]);
    printf("\nThe smallest number is : %d\nThe second smallest number is : %d",matrix[m-1][n-1],matrix[m-1][n-2]);
    getch();
}
