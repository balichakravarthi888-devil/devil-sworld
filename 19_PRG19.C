//programs example for iterative control structures program to print 1...to
//20 contiuous numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
int n;
n=1;
clrscr();
while(n<=20)
{
printf("\n%d",n);
n++;
}
getch();
}