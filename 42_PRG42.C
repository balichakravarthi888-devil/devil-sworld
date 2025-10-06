/*PROGRAM TO CREATE A DOUBLE DIMENSIONAL ARRAY WHICH IS OF INTEGER DATA TYPE
READ THE DATA INTO IT AFTER THAT PRINT THE ARRAY ELIMENTS*/
#include<stdio.h>
#include<conio.h>
void main()
{
int num[5][3],i,j;
clrscr();
printf("\nEnter the array elements for num[5][3]\n");
for(i=0;i<5;i++)
{
for(j=0;j<3;j++)
scanf("%d",&num[i][j]);
}
printf("\nThe array eliments are :\n");
for(i=0;i<5;i++)
{
for(j=0;j<3;j++)
printf("%d\t",num[i][j]);
printf("\n");
}
getch();
}
