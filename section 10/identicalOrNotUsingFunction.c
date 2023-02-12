/*A function using pointer that compare two integer array to see whether they are identical . The function return 1 if they are identical,0 otherwise .*/
#include<stdio.h>
#include<conio.h>
int identical(int *array1,int *array2,int m);/*this function is definition  for check whether it is  identical or not*/
void main()
{
    int n,m;/*variable declaration*/
    printf("this program check the given two array are identical or not :: \n");
    printf("-------------------\t---------------\t-----------------");
    printf("\nenter the size of first array : ");
    scanf("%d",&n);
    printf("\nenter the size of second array : ");
    scanf("%d",&m);
    int array1[n],array2[m],i,retrn;/*creating of two 1d array*/
    if(m==n)
    {
        printf("\nEnter the element of first array : ");
        for(i=0;i<m;i++)
        {
            scanf("%d",&array1[i]);/*input of element of first array*/
        }
        printf("\nEnter the element of second array : ");
        for(i=0;i<m;i++)
        {
            scanf("%d",&array2[i]);/*input of element of second array*/
        }
        retrn=identical((int *)array1,(int *)array2,m);/*calling of identical function*/
        printf("\nreturn : %d",retrn);
    }
    else
    {
        printf("\nHere the number of element of first array is different then second .\nso they are never be identical");
    }
}
int identical(int *array1,int *array2,int m)/*function declaration*/
{
    int i,count=0;
    for(i=0;i<m;i++)
    {
        if(*(array1+i)==*(array2+i))
        {
            count++;
        }
    }
    if(count==m)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
/*end program*/
