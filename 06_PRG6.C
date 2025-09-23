// this program example for all arthematic operators
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
float d;
clrscr();
printf("\n enter any two vlues for a and b:");
scanf("%d %d",&a,&b);
c=a+b;
printf("\n the sum of the two numbers is :%d",c);
c=a-b;
printf("\n the subtraction of the two numbers is :%d",c);
c=a*b;
printf("\n the multiplication of the two numbers is :%d",c);
d=a/b;
printf("\n the division of two numbers is :%f",d);
c=a%b;
printf("\n the reminder after the division is :%d",c);
getch();
}