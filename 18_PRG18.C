/*program to checks whether the entered character is a vowel of not
using switch case*/
#include<stdio.h>
#include<conio.h>
void main()
{
char choice;
clrscr();
printf("\n enter any character:");
choice=getchar();
switch(choice)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("\n the given character is a vowel:");
break;
default:
printf("\n the given character is not a vowel:");
}
getch();
}