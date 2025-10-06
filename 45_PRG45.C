/*Program to findout the row sum of the given matrix */
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,rsum= 0,arr[4][3];
clrscr();
printf("\nEneter any 12 values for array:\n");
for(i=0;i<4;i++)
for(j=0;j<3;j++)
scanf("%d",&arr[i][j]);
//loops for finding the row sum of the given matrix /
clrscr();
for(i=0;i<4;i++)
{
for(j=0,rsum=0;j<3;j++)
{
printf("%d\t",arr[i][j]);
rsum=rsum+arr[i][j];
}
printf("\n This row sum is: %d",rsum);
printf("\n");
}
getch();
}
