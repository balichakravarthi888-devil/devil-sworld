//PROGRAM EXAMPLE FOR THE POINTERS WITH FUNCTIONS
//PROGRAM EXAMPLE TO SWAP TWO NUMBERS USING CALL BY REFERENCE

#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
void main()
{
int a=10,b=20;
clrscr();
printf("\n The values in a and b before swapping :\na=%d\nb=%d",a,b);
swap(&a,&b);
printf("\nThe values in a and b after swapping :\na=%d\nb=%d",a,b);
getch();
}
void swap(int *x,int *y)
{
/*
int temp;
temp=*x;
*x=*y;
*y=temp;
*/
*x=*x+*y;
*y=*x-*y;
*x=*x-*y;


}
