//PROGRAM TO PRINT REVERSE DIAGNAL ELEMENTS OF A MATRIX

#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j;
clrscr();
printf("\n Enter the array elements for 3*3 matrix");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
}
clrscr();
printf("\n The array elements in matrix format is:");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
puts("\n The diagnal elements are :");
for(i=0,j=2;i<3&&j>=0;i++,j--)
printf("%d\n",a[i][j]);
getch();
}