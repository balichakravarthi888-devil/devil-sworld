//program example for the nested if statement
#include<stdio.h>
#include<conio.h>
void main()
{
int rno,m1,m2,m3,tot;
float avg;
char name[20];
clrscr();
printf("\n enter rno and name of the student:");
scanf("%d%s",&rno,name);
printf("enter marks of the student in 3 subjects");
scanf("%d%d%d",&m1,&m2,&m3);
tot=m1+m2+m3;
avg=tot/3;
clrscr();
printf("\n the roll number of the student is :%d",rno);
printf("\n the name of the student is :%s",name);
printf("\n the marks of the student is :\n\t%d\t%d\t%d",m1,m2,m3);
printf("\n the total marks of the student is :%d",tot);
printf("\ the average marks of the student is :%f",avg);
if(m1>=35 && m2>=35 && m3>=35)
{
printf("\n the result of the student is :pass");
if(avg>=60)
printf("\n the result of the student is first class");
else if(avg>=60)
printf("\n the result of the student is second class");
else
printf("\n the grade of the student is thrid class");
}
else
{
printf("\n the result of the student is fail");
printf("\n the grade of the student is nill");
}
getch();
}