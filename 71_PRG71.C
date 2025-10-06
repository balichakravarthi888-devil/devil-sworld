/* Program To findout the given character is digit or not using isdigit() */
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char ch;
clrscr();
printf("\nEnter any Character for ch:");
ch = getchar();
if(isdigit(ch) > 0)
printf("\nThe given character is a digit");
else
printf("\nThe given character is not a digit");
getch();
}
