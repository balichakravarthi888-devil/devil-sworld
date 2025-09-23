//program example for selective control structure
//program to find biggest value in given two values

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,big;
clrscr();
printf("\n enter any value for a:");
scanf("%d",&a);
printf("\n enter any value for b:");
scanf("%d",&b);
if(a>b)
big=a;
else
big=b;
printf("\n the biggest value in two values is :%d",big);
getch();
}