//program example for the functions with arrays

#include<stdio.h>
#include<conio.h>
void fun(int[],int); //function prototype declaration

void main()
{
int a[10],n,i;
clrscr();
printf("\n enter size of the array:");
scanf("%d",&n);
clrscr();
printf("\nEnter the %d values for array\n",n);
scanf("%d",&a[i]);
fun(a,n); //calling the user defined function fun with array a and size n
getch();
}
void fun(int b[10],int n)
{
int i;
for(i=0;i<n;i++)
printf("\nThe value in %d element is %d",i+1,b[i]);
}
