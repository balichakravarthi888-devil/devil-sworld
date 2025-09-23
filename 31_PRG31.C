//this program is example for the continue statement
#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
for(i=1;i<=10;i++)
{
if(i==5 || i==6)
continue;
printf("%d\n",i);
}
printf("\n this end of the line in our program");
getch();
}