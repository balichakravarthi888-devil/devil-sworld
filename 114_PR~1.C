/* Program Example for the structures with pointers */
#include<stdio.h>
#include<conio.h>
struct student
{
int rno;
char name[15];
int s1,s2,s3;
}s;
void main()
{
int total;
float avg;
struct student *sptr;
sptr=&s;
/* Reading values to structure using pointers */
clrscr();
printf("\nEnter rollno and name of the student ");
scanf("%d%s", &sptr->rno, sptr->name);
printf("\nEnter marks in 3 subjects: ");
scanf("%d%d%d", &sptr->s1, &sptr->s2,&sptr->s3);
total=sptr->s1+sptr->s2+sptr->s3;
avg=total/3;
printf("\nThe rollno of the student is: %d",sptr->rno);
printf("\nThe name of the student is: %s", sptr->name);
printf("\nThe marks of the student is :\n");
printf("\n%d\t%d\t%d",sptr->s1,sptr->s2,sptr->s3);
printf("\nTotal marks of the student is : %d", total);
printf("\nAverage marks of the student is : %f", avg);
getch();
}