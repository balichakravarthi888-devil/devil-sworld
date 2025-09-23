//this program is example for the comma(.) operator
#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum;
clrscr();
for(i=2,sum=0;i<=20;i+=2)
{
sum=sum+i;
printf("%d\n",i);
}
printf("\n The sum of the first 10 even numbers is: %d\n",sum);
getch();
}