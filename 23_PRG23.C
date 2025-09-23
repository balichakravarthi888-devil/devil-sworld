/*his program example for the iterative control structure
This program to calculate fibonacci series using do...while();loop*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
a=0;
b=1;
clrscr();
printf("\n enter the number of terms:");
scanf("%d",&d);
printf("\n\t%d\n\t%d",a,b);
do
{
c=a+b;
printf("\n\t%d",c);
a=b;
b=c;
d--;
}
while(d>2);
getch();
}