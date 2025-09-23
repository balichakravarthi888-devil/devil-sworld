/*this program is example for the selective control structure this program
to find out the grade of the employee using conditional structures*/

#include<stdio.h>
#include<conio.h>
void main()

{
int salary;
clrscr();
printf("\n enter the salary of the employee:");
scanf("%d",&salary);
(salary>15000)?printf("\n the employee grade is a"):printf("\n the emplyee is b");
getch();
}