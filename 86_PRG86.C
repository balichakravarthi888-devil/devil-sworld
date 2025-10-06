//ARRAYS WITH FUNCTIONS

#include<stdio.h>
#include<conio.h>
void printarr(int[],int);
void main()
{
int a[5]={1,2,3,4,5},b[]={10,20,30,40,50};
clrscr();
printarr(a,5); //calling the function printarr
printf("\n");
printarr(b,5);
getch();
}
void printarr(int arr[],int n)
{
int i;
printf("\n The values in the array are :\n");
for(i=0;i<n;i++)
printf("%d\t",arr[i]);
}