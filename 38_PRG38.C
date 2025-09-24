//PROGRAM EXAMPLE FOR THE SINGLE DIMENSIONAL ARRAYS PROGRAMS TO DECLARE,
//READ AND PRINT ARRAYS

#include<stdio.h>
#include<conio.h>
void main()
{
int no[10],i;
clrscr();
printf("\nEnter anuy 10 values for array:");
for(i=0;i<10;i++)
scanf("%d",&no[i]);
clrscr();
printf("\n The values in array are:\n");
for(i=0;i<10;i++)
printf("%d\t",no[i]);
getch();
}
