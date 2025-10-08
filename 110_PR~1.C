/* Program Example for the Nested Structure */
#include<stdio.h>
#include<conio.h>
struct student
{
char name[20];
int rno;
struct address /* Nested structure */
{
int door_no;
long pin;
char street[10];
char state[10];
}add;
}sl;
void main()
{
clrscr();
printf("\nEnter the roll number of the student ");
scanf("%d",&sl.rno);
printf("\nEnter student name ");
fflush(stdin);
gets(sl.name);
printf("\nEnter the door number ");
scanf("%d",&sl.add.door_no);
printf("\nEnter street name ");
fflush(stdin);
gets(sl.add.street);
printf("\nEnter Pincode ");
scanf("%ld", &sl.add.pin);
printf("\nEnter State ");
fflush(stdin);
gets(sl.add.state);
clrscr();
/* Printing student details from the staructures */
printf("\nThe Details of the student is: ");
printf("\n Rno =\% d " ,sl.rno);
printf("\n Name =%s",sl.name);
printf("\n Address of the student is ");
printf("\n Dno =\% d ", sl.add.door_no);
printf("\n Street =%s", sl.add.street);
printf("\n State =% s", sl.add.state);
printf("\n PinCode =\% ld ", sl.add.pin);
getch();
}