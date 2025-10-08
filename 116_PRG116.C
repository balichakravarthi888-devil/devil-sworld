//STRUCTURE WITH FUNCTIONS AND POINTERS
#include<stdio.h>
#include<conio.h>
void getdata(struct student*);
void showdata(struct student*);
struct student
{
int sno;
char sname[10];
}s1;
void main()
{
clrscr();
getdata(&s1);
showdata(&s1);
getch();
}
void getdata(struct student *s)
{
printf("Enter sno ");
scanf("%d",&s->sno);
printf("Enter name ");
fflush(stdin);
gets(s->sname);
}
void showdata(struct student *s)
{
printf("\nNumber = %d\nName = %s",s->sno,s->sname); printf("\nSize of structure = %d", sizeof(*s));
}