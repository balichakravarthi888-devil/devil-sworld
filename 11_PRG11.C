/*this program is example for the selective control structure this
program to find the given number is even or odd using if...els*/
#include<stdio.h>
#include<conio.h>
void main()
{
int number;
clrscr();
printf("\n enter any number:");
scanf("%d",&number);
if(number%2==0)
printf("\n the given number is even number");
else
printf("\n the given number is odd number");
getch();
}
