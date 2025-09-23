//example to print even an odd numbers in the given range
#include<stdio.h>
#include<conio.h>
void main()
{
int no,range;
clrscr();
printf("\n enter choice 1 for odd and 2 for even numbers:");
scanf("%d",&no);
printf("\n enter range of the numbers:");
scanf("%d",&range);
while(no<=range)
{
printf("\n%d",no);
no+=2;
}
getch();
}