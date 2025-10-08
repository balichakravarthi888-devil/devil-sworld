//ARRAY OF STRUCTURE VARIABLES
#include<stdio.h>
#include<conio.h>
struct emp

{
int eno;
char ename[20];
};
void main()
{
int i,j;
struct emp e[10];
clrscr();
printf("\nEnter size of structure array below 10:");
scanf("%d",&i);
for(j=0;j<i;j++)
{
printf("\nEnter employee number ");
scanf("%d",&e[j].eno);
printf("\nEnter employee name:");
fflush(stdin);
gets(e[j].ename);
}
clrscr();
printf("\nEMPLOYEE_NO \t EMPLOYEE_NAME");
for(j=0;j<i;j++)
{
printf("\n%d",e[j].eno);
printf("\t\t%s",e[j].ename);
}
getch();
}