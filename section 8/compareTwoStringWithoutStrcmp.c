/*this program will compare two string without using strcmp() function*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str1[50],str2[50];/*declaration of string*/
    int i,j,k,p,count=0;
    printf("::this program will compare two string without using strcmp function::\n");
    printf("\n--------------------------------------------------------------------\n");
    printf("enter some text that input in first string: \t");
    gets(str1);/*input of first string*/
    printf("\nagain enter some text that input in the second string: ");
    gets(str2);/*input of second string*/
    k=strlen(str1);/*length of first string using strlen() function*/
    p=strlen(str2);/*length of second string using strlen() function*/
    if(k==p)
    {
        for(i=0;i<k;i++)
        {
            for(j=0;j<p;j++)
            {
                if(i==j&&str1[i]==str2[j])
                {
                    count++;
                }
            }
        }
        if(count==p)
        {
            printf("\nthese two string  are same::");
        }
        else
        {
            printf("\nthese two  string are different::");
        }
    }
    else
    {
        printf("\nthis size of two string are different so these two string are not same");
    }
    getch();
}
/*end of the program*/
