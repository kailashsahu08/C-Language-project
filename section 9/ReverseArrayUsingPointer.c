/*A program that will read an array of integer  and print its element in reverse order*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;/*variable n(size of array) declare*/
    printf("This program that will read an array of integer  and print its element in reverse order");
    printf("\n------------------------------------------------------------------------------------\n\n");
    printf("enter the size of an array : ");
    scanf("%d",&n);
    int array[n],i;/*declaration of an array and loop variable */
    printf("now enter %d number of element : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(array+i));/*input of element of array using pointer */
    }
    printf("the element in reverse order are : ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",*(array+i));/* print the array of array using reverse order */
    }
    getch();
}
/*end program */
