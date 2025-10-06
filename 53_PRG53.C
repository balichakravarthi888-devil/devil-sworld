//THIS PROGRAM SHOWS THE USAGE OF ARRAY OF STRINGS DECLARING ARRAY OF STRINGS, INITIALIZING A ARRAY
//OF STRINGS, AND PRINT ARRAY OF STRING VARIABLES

#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char names[5][10]={"prasad","kiran","anil","chandu","swathi"};
clrscr();
for(i=0;i<5;i++)
printf("\n%s",names[i]);
getch();
}