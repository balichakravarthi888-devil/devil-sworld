//PROGRAM EXAMPLE OR THE STRUCTURES
#include<stdio.h>
#include<conio.h>
struct student //structure definitin
{
int sno,m1,m2,m3;

char sname[15];
};
void main()
{
struct student s={ 1, 20, 30, 40 , "rajesh"}; /*variable declaration & initialization */
/* struct student s;
s.sno=1;
s. m * 1 = 20 ;
s. m * 2 = 30 ;
s. m * 3 = 40 ;
strcpy(s.sname, "rajesh"); */
clrscr();
printf("\nStudent number =%d",s.sno);
printf("\nStudent name =%s",s.sname);
printf("\nStudent marks\nM1 = %d\tM2 = %d\tM3 = %d",s.m1,s.m2,s.m3);
printf("\nThe Size of the Structure =\% d Bytes", sizeof(s)); \
/* It will prints the entire structure size */
getch();
}
