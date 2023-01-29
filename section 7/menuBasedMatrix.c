/*a menu based program that takes two matrix A and B as input and display the result of the following operations based on users choice*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,k,g,l;
    printf("entered the size of row of matrix A :\t");
    scanf("%d",&n);
    printf("\nenter the size of column of a matrix A :\t");
    scanf("%d",&k);
    printf("entered the size of row of matrix B:\t");
    scanf("%d",&g);
    printf("\nenter the size of column of a matrix B :\t");
    scanf("%d",&l);
    int A[n][k],B[g][l],c[n][l],x,y,z;
    z=(n*k);
    printf("\nenter %d element that input in matrix A: ",z);
    for(x=0;x<n;x++)
    {
        for(y=0;y<k;y++)
        {
            scanf("%d",&A[x][y]);
        }
    }
    printf("\nenter %d element that input in matrix B: ",z);
    for(x=0;x<g;x++)
    {
        for(y=0;y<l;y++)
        {
            scanf("%d",&B[x][y]);
        }
    }
    printf("\n::now choice any one option from the below::");
    printf("\n1.A+B\n2.A-B\n3.B-A\n4.A*B");
    int i;
    printf("\nchoice any one option:\n");
    scanf("%d",&i);
    switch(i)
    {
        case 1:
            if(n==g&&k==l)
            {
                printf("\nthe sum of matrix A and matrix B are: ");
                for(x=0;x<n;x++)
                {
                    for(y=0;y<k;y++)
                    {
                        c[x][y]=A[x][y]+B[x][y];
                    }
                }
                for(x=0;x<n;x++)
                {
                    for(y=0;y<k;y++)
                    {
                        printf("%d\t",c[x][y]);
                    }
                    printf("\n");
                }
            }
            else
            {
                printf("\nthe row and column are not same.\nso matrix A and B are not added");
            }

        break;
        case 2:
            if(n==g&&k==l)
            {
                printf("\nyou choose option no.2\nthe subtraction of B from A is:\n");
                for(x=0;x<n;x++)
                {
                    for(y=0;y<k;y++)
                    {
                        c[x][y]=A[x][y]-B[x][y];
                    }
                }
                for(x=0;x<n;x++)
                {
                    for(y=0;y<k;y++)
                    {
                        printf("%d\t",c[x][y]);
                    }
                    printf("\n");
                }
           }
           else
           {
               printf("\nthe row and column are not same.\nso matrix A and B are not substracted");
           }
        break;
        case 3:
            if(n==g&&k==l)
            {
                printf("\nyou choose option no.3\nthe subtraction of A from B is:\n");
                for(x=0;x<n;x++)
                {
                    for(y=0;y<k;y++)
                    {
                        c[x][y]=B[x][y]-A[x][y];
                    }
                }
                for(x=0;x<n;x++)
                {
                    for(y=0;y<k;y++)
                    {
                        printf("%d\t",c[x][y]);
                    }
                    printf("\n");
                }
           }
           else
           {
               printf("\nthe row and column are not same.\nso matrix A and B are not substracted");
           }
        break;
        case 4:
            if(k==g)
            {
                printf("\nyou choose option no 4.\nthe multiplication of A and B are:\n");
                int a;
                for(x=0;y<n;y++)
                {
                    for(y=0;y<n;y++)
                    {
                        c[x][y]=0;
                        for(a=0;a<3;a++)
                        {
                            c[x][y]=c[x][y]+A[x][a]*B[a][y];
                        }
                    }
                }
                for(x=0;x<n;x++)
                {
                    for(y=0;y<n;y++)
                    {
                        printf("%d",c[x][y]);
                    }
                    printf("\n\n");
                }

            }
            else
            {
                printf("\nthe row and column of are different so the matrix A and B are not multiplicate");
            }
        break;
        default:
            printf("\nyou choose an available option");
    }
}
