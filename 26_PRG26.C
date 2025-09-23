// this program is example for the iterative control structure using nested
//for loop

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,no;
clrscr();
printf("\n Enter the number upto which the number are to be print:");
scanf("%d",&no);
for(i=1;i<=no;i++)
{
printf("\t\t\t");
for(j=1;j<=i;j++)
{
printf("%3d",j);
}
printf("\n");
}
getch();
}

//DEVIL'S CODE