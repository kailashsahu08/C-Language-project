/*This program will read  a string and arrange them in a alphabetical order*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void  main()
{
    char alphabet[50];
    int i,j,k,swap,integer,n=0;
    printf("::this program will arrange the string in an alphabetical order::\n");
    printf("\n---------------------------------------------------------------\n");
    printf("enter a some alphabet: ");
    gets(alphabet);
    k=strlen(alphabet);
    char store[k];
    for(i=0;i<k;i++)
    {
        if(alphabet[i]>='a'&&alphabet[i]<='z')
        {
            store[n]=alphabet[i];
            n++;
        }
    }
    printf("\nthe: ");
    strupr(alphabet);
    strupr(store);
    for(i=0;i<k;i++)
    {
        if(alphabet[i]>='A'&&alphabet[i]<='Z')
        {
            for(j=0;j<k;j++)
            {
               if(alphabet[i]<alphabet[j])
               {
                    swap=alphabet[i];
                    alphabet[i]=alphabet[j];
                    alphabet[j]=swap;
               }
            }
        }
        else
        {
            printf("\n::all the elements of that string are not alphabet::");
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        if(store[i]>='A'&&store[i]<='z')
        {
            for(j=0;j<k;j++)
            {
              if(store[i]==alphabet[j])
              {
                  integer=(int)alphabet[j]+32;
                  alphabet[j]=integer;
                  break;
              }
            }
        }
    }
    printf("\nthe element of string in alphabetical order are:");
    for(i=0;i<k;i++)
    {
        printf("%c",alphabet[i]);
    }
    getch();
}
