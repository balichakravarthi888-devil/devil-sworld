 
/* program example for the opening a file using fopen() */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
FILE *fp; /* declaring the file pointer here FILE is datatype fp is variable */
fp=fopen("student.txt","w");
clrscr();
if(fp==NULL)
{
puts("Sorry! cannot create the file");
getch();
exit(1);
}
else
puts("The file is opened in write only mode");
getch();
}
