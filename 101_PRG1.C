//POINTERS WITH DOUBLE DIMENSIONAL ARRAYS

#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][2]={
	     {1,0},
	     {1,4},
	     {1,6}
	     };
int i,j,*aptr;
aptr=&a[0][0];
clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
printf("\nthe corresponding address a[%d][%d] is %u",i,j,((aptr+i)));
printf("\n values is: %d\n",*((aptr+j)));
}
aptr++;
}
getch();
}