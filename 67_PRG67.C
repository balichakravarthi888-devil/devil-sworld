/* This program to check the given character is printable character or not printable character */
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("Enter any single character:");
c = getchar();
if(isprint(c) > 0)
printf("\nEntered character is printable character ");
else
printf("\nEntered character is not a printable character");
getch();
}
