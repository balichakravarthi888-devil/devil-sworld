//ARRAYS WITH FUNCTIONS

#include<stdio.h>
#include<conio.h>
void printarr(int[],int);
void main()
{
int arr[5]={2,4,6,8,10};
clrscr();
printarr(arr,5); //calling the function printarr
getch();
}
void printarr(int arr[],int n)
{
int i;
printf("\n The values in the array are :\n");
for(i=0;i<n;i++)
printf("%d\t",arr[i]);
}