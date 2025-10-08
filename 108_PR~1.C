/* program example for the declaring structure, read and print structure */
#include<stdio.h>
#include<conio.h>
struct emp /* definition for the structure */
{
int eno;
char ename[20];
};
struct emp e;/* Declaring the variable to the structure as a global variable*/
void main()
{
clrscr();
//scanf("%d",&e.eno);
printf("\nEnter the number for eno:");
scanf("%d",&e.eno);
printf("\nEnter ename:");
//gets(e.ename); /* scsanf("%s", e.name); */
fflush(stdin);
gets(e.ename);
printf("\nNumber =\%d ", e.eno);
printf("\nName =%s",e.ename);
getch();
}