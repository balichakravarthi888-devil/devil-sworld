/* This program to check the given character is punctuated character or not using ispunct() function */
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("\n Enter any single character:");
c = getchar();
if(ispunct(c) > 0)
printf("\nEntered character is punctuated character");
else
printf("\nEntered character is not a punctuated character");
getch();
}
