/*a program that input a square matrix and then print its upper triangular matrix*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("this program will print the upper triangular matrix\n");
    printf("\n--------------------------------------------------\n");
    printf("\nenter the size of square matrix:");
    scanf("%d",&n);
    int matrix[n][n],p,i,j,k;
    p=(n*n);
    printf("\nyou have enter the %d*%d matrix:",n,n);
    printf("\nnow entered %d element that store in the matrix:",p);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nthe given matrix in upper triangular matrix are:\n");
    for(i=0;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("\t");
        }
        for(k=i;k<n;k++)
        {
            printf("%d\t",matrix[i][k]);
        }
        printf("\n\n");
    }
    getch();
}
/*end program*/
