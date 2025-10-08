//ARRAYS WITH FUNCTIONS AND POINTERS
//THIS PROGRAM PASS THE ARRAY VALUES TO THE FUNCTIONS USING CALLING REFFERENCE

#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[5]={1,2,3,4,5};
clrscr();
printf("\nThe array elements are :\n");
for(i=0;i<5;i++)
display(&a[i]);
getch();
}
display(int*aptr)
{
printf("\nThe adress of elements is :%u and the value is: %d",aptr,*aptr);
return(0);
}