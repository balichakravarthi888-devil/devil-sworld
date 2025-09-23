/*THIS PROGRAM IS EXAMPLE FOR THE ITERATIVE CONTROL STRUCTURE
PROGRAME TO PRINT PRIME NUMBERS USING FOR LOOP*/

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,no,c;
clrscr();
printf("Enter the number upto which prime number you want to print:");
scanf("%d",&no);
for(i=1;i<=no;i++)
{
for(j=2,c=0;j<i&&c==0;j++)
{
if(i%j==0)
c=i;
}
if(c==0)
printf("%d\n",i);
}
getch();
}

//DEVIL'S CODE