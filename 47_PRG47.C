/* Program for matrix addition */
#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][2],b[2][2],c[2][2],i,j;
clrscr();
 printf("\nenter the first array elements:");
for(i=0;i<2;i++)
 for(j=0;j<2;j++)
{
 scanf("%d",&a[i][j]);
}
printf("\nenter the values for second array:"); 
for(i=0;i<2;i++)
 for(j=0;j<2;j++)
 {
scanf("%d",&b[i][j]);
}
// loops for adding a and b matrixes and store the sum into the c matrix /
for(i=0;i<2;i++)
for(j=0;j<2;j++)
//Printing C matrix*/
printf("\nThe sum of matrics are \n");
for(i=0;i<2;i++)
{
 for(j=0;j<2;j++)
printf("%d\t",c[i][j]);
printf("\n");
}
getch();
}