/* this program is example for the selective control structure this
program to find out smallest number among two numbers using simple if*/
#include<stdio.h>
#include<conio.h>
void main()
{
int no1,no2,s;
clrscr();
printf("\n enter the value of no1:");
scanf("%d",&no1);
printf("\n enter the value of no2:");
scanf("%d",&no2);
s=no1;
if(no1>no2)
s=no2;
printf("\n the smallest number is %d",s);
getch();
}