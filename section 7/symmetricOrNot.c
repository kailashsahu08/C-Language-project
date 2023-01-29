/*this program will check whether a given square matrix is symmetric or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("::this program will check whether the given square matrix is symmetric or not::");
    printf("\nenter the size of the square matrix: ");
    scanf("%d",&n);
    int matrix[n][n],i,j,p,count=0;/*array size declaration and variable declairation*/
    p=(n*n);/*the total element of the matrix*/
    printf("\nyou have entered %d*%d square matrix",n,n);
    printf("\nnow input %d element in this matrix: ",p);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);/*input the number of array*/
        }
    }
    printf("\nthe matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d  ",matrix[i][j]);
            if(matrix[i][j]==matrix[j][i])
            {
                count++;
            }
        }
        printf("\n");
    }
    if(count==p)
    {
        printf("\n::this is a symmetric matrix::");
    }
    else
    {
        printf("::this is not a symmetric matrix::");
    }
    getch();
}
/*end program*/
