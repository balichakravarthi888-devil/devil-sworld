//this program is example for the iterative control structure
//this program to print the odd numbers using do...while() control structure
#include<stdio.h>
#include<conio.h>
void main()
{
int number=1,a=1;
clrscr();
do
{
printf("%d%d\n",a,number);
number=number+2;
a++;
}
while(number<=11);
getch();
}