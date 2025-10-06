/* This program to check the given character is SPACE or not using isspace() function */
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("Enter any space:");
c = getchar();
if(isspace(c) > 0)
printf("\nEntered character is space");
else
printf("\nEntered character is not a space");
getch();
}
