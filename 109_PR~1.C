//ASSIGNEMENT ONE STRUCTURE VARIABLE TO ANOTHER STRUCTURE VARIABLE
#include<stdio.h>
#include<conio.h>
struct book
{
int bcode;
char bname[20];
float bprice;
};
void main()
{
struct book b1,b2;
clrscr();
printf("Enter bcode :");
scanf("%d",&b1.bcode);
printf("\nEnter bname :");
fflush(stdin);
gets(b1.bname);
printf("\nEnter bprice");
scanf("%f",&b1.bprice);
b2=b1;
printf("\nBcode = %d",b2.bcode);
printf("\nBname = %s",b2.bname);
printf("\nBprice=%.2f",b2.bprice);
getch();
}