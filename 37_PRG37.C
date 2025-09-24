//PROGRAM EXAMPLE FOR THE SINGLE DIMENSIONAL ARRAYS DECLARATION,INITIALIZATION
//AND PRINTING

#include<stdio.h>
#include<conio.h>
void main()
{
int i,arr[5]={45,34,66,77,88};
clrscr();
printf("\nThe value in the array are: \n");
for(i=0;i<5;i++)
{
printf("%d\t",arr[i]);
}
getch();
}