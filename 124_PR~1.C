//THIS PROGRAM SHOWS THE USAGE OF fscanf() functioin

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
FILE*fp;
int htno,m1,m2,m3;
char name[15];
fp=fopen("student.txt","r");
clrscr();
if(fp==NULL)
{
puts("cannot open the file 'student.txt'");
getch();
exit(1);
}
while(fscanf(fp,"%d %s %d %d %d",&htno,name,&m1,&m2,&m3)!=EOF)
printf("\n %d %s %d %d %d",htno,name,m1,m2,m3);
fclose(fp);
getch();
}