/*a program that will count the number of occurrence of a specific character in a given line of text*/
#include<stdio.h>
#include<conio.h>
void main()
{
    char text[50],name[50];/*declareation of two string*/
    int i,j,count=0;
    printf("this program will count the number of a specific character in a given line of text::\n\n");
    printf("\n-----------------------------------------------------------------------------------\n");
    printf("enter some text:");
    gets(text);/*string input*/
    for(i=0;i<50;i++)
    {
        name[i]=text[i];/*the text string is copied to name string*/
    }
    for(i=0;i<50;i++)
    {
        if(text[i]=='\0')
        {
            break;
        }
        for(j=0;j<50;j++)
        {
          if(text[i]==name[j])
          {
              count++;
              name[j]='\0';
          }
        }
        if(count>=1)
        {
            printf("\nthe %c character uses %d number of times",text[i],count);
            count=0;
        }
    }
    getch();
}
/*end program*/
