//program for finding column sum
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,row,col,sum=0,a[10][10];
clrscr();
printf("\nEnter how many rows you want to read:");
scanf("%d",&row);
printf("\nEnter how many columns you want to read:");
scanf("%d",&col);
printf("enter the values of the matrix\n");
for(i=0;i<row;i++)
for(j=0;j<col;j++)
scanf("%d",&a[i][j]);
printf(" in The array values in Matrix format is : \n");
for(i=0;i<row;i++)
for(j=0;j<col;j++)
printf("%d\t",a[i][j]);
printf("\n");
for(j=0;j<col;j++)
{
for(i=0,sum=0;i<row;i++)
{
sum= sum+a[i][j];
}
printf("\nThe %d column sum is: %d", j,sum);
}
getch();
}
