//program example for the switch..case control structure

#include<stdio.h>
#include<conio.h>
void main()
{
int day;
clrscr();
printf("\n Enter the day number:");
scanf("%d",&day);

switch(day)
{
case 1:
printf("\n Hello today is sunday");
break;
case 2:
printf("\n Hello today is monday");
break;
case 3:
printf("\n Hello today is tuesday");
break;
case 4:
printf("\n Hello today is wednesday");
break;
case 5:
printf("\n Hello today is thursday");
break;
case 6:
printf("\n Hello today is friday");
break;
case 7:
printf("\n Hello today is saturday");
break;
default:
printf("\n\a Hello you have entered an invalid week day number:");
}
getch();
}