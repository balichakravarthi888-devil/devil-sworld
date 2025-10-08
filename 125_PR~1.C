//PROGRAME SHOWING THE USAGE OF STRUCTURES WITH FILES
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()

{
struct student
{
int htno;
char name[15];
int m1,m2,m3;
}
s[10];
FILE *fp;
int no,i;
clrscr();
printf("Enter how many students data you want to store:");
scanf("%d",&no);
fp=fopen("student.txt","w");
if(fp==NULL)
{
puts("Error !Hello cannot open the file 'student.txt");
getch();
exit(1);
}
for(i=0;i<no;i++)
{
printf("\nEnter htno,name,m1, m2,m3 of the %d student :\n", i+1);
scanf("%d %s %d %d %d", &s[i].htno,s[i].name,&s[i].m1,&s[i].m2,&s[i].m3);
fprintf(fp,"%d %s %d %d %d\n",s[i].htno,s[i].name,s[i].m1,s[i].m2,s[i].m3);
fflush(stdin);
}
fclose(fp);
}