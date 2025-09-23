//THIS PROGRAM IS EXAMPLE FOR THE ITERATIVE CONTROL STRUCTURE
//THIS PROGRAM TO PRINT MULTIPLICATION TABLE FROM 1 TO 20 USING FOR LOOP

#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int i,j;
clrscr();
for(i=1;i<=10;i++)
{
printf("\a\a");
clrscr();
for(j=1;j<=20;j++)
{
printf("\n%d * %d == %d ",j,i,i*j);
}
printf("\n**********************************************************************\n");
sleep(5);
printf("\n press any key to continue:");
getch();
}
}
