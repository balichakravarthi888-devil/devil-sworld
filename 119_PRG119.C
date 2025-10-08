//PROGRAM EXAMPLE FOR THE READING A FILE USING fgetc()
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
char c,fname[20];
FILE*fp;
clrscr();
printf("\nHello enter the file name to be open:");
scnaf("%s",fname);
fp=fopen(fname,"r");
if(fp==NULL)
{
puts("\nThe file is Not exists, cannot open the file");
getch();
exit(1);
}
else
c=fgetc(fp);
while(c!=EOF)
{
printf("%c",c);
c=fgetc(fp);
}
getch();
}