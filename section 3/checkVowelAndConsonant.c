/*write a program to input a character and check whether it is a vowel and consonant using conditional operator*/
#include<stdio.h>
#include<conio.h>
void main()
{
    char alphabet;
    printf("this program will check given alphabet is vowel and consonant\n");
    printf("\nenter any alphabet character: ");
    scanf("%c",&alphabet);
    alphabet==65||alphabet==69||alphabet==73||alphabet==79||alphabet==85||alphabet==97||alphabet==101||alphabet==105||alphabet==111||alphabet==117?printf("\n%c is a vowel",alphabet):printf("\n%c is a consonant",alphabet);
    getch();
}
