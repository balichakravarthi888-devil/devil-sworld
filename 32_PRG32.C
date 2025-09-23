//this program is example for the exit() function
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int i;
clrscr();
do
{
printf("\n Enter any number to continue or 0 to exit:");
scanf("%d",&i);
if(i==0)
exit(0);
}while("true");
printf("\n this is last line in this programe");
getch();
}