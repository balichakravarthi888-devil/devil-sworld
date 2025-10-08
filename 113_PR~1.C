
/* Structure with pointers */
#include<stdio.h>
#include<conio.h>
struct student
{
int sno;
char sname[10];
};

struct student *s;
void main()
{
clrscr();
printf("\nEnter Number ");
scanf("%d", &s->sno);
printf("\nEnter name ");
fflush(stdin);
scanf("%s",s->sname);
printf("\nStudent name = %s", s->sname);
printf("\nStudent number=%d",s->sno);
getch();
}