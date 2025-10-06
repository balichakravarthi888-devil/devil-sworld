//THIS PROGRAM TO PRINT DIAGNAL ELEMENTS OF A MATRIX
#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j;
clrscr();
printf("\nEnter the array elements for 3*3 matrix\n");
for(i=0;i<5;i++)
{
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
}
printf("\n The array elements in matrix format is: \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
puts("\nThe diagnal elements are:");
for(i=0,j=2;i<3&&j>=0;j--)
printf("%d\n",a[i][j]);
getch();
}
