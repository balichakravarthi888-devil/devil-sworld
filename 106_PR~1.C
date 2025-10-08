//ARRAYS WITH FUNCTION AND POINTERS
//THIS PROGRAM TO FINDOUT THE SUM OF THE ARRAY USING FUNCTIONS THROUGH CALL BY REFERENCE

#include<stdio.h>
int display(int*,int);
main()
{
int sum,a[5]={1,2,3,4,5};
clrscr();
sum=display(a,5);
printf("\nThe sum of the array is :%d",sum);
getch();
return(0);
}

int display(int*aptr,int n)
{
int i,arrsum=0;
printf("\nThe array elemments are:\n");
for(i=0;i<n;i++)
{
arrsum=arrsum+*(aptr+i);
printf("\nThe address of element is :%u",(aptr+i));
printf("\n and the value is :%d",(aptr+i));
}
return(arrsum);
}