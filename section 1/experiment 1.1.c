/*write a programme to enter the temperature in degree celcius and display it in fahrenheit and vice versa*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float fahrenheit,celsius;
    printf("\nthis programme find out the temperature in degree fahrenheit of a given temperature in celsius and vice versa\n");
    printf("\nenter the temperature in degree celcius: ");
    scanf("%f",&celsius);
    fahrenheit=((9.0/5.0)*celsius)+32;
    printf("\nthe temperature in degree farenheit are :%f\n",fahrenheit);
    printf("\nagain enter the temperature in degree fahrenheit:");
    scanf("%f",&fahrenheit);
    celsius=((5.0/9.0)*(fahrenheit-32));
    printf("\nthe temperature in degree celsius is:%f",celsius);
    getch();
}
