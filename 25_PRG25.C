/*THIS PROGRAMMM IS EXAMPLE FOR THE ITERATIVE CONTROL STRUCTURE
PROGRAM TO CALCULATE THE FACTORIAL OF A GIVEN NUMBER FOR LOOP*/
#include<stdio.h>
#include<conio.h>
void main()
{
int number,count,fact=1;
clrscr();
printf("\n enter the number for calculating factorial:");
scanf("%d",&number);
for(count=1;count<=number;count++){
fact=fact*count;
}
printf("\n the factorial of the %d is :%d\n",number,fact);
getch();
}