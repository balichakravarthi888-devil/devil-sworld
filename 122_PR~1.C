//Program Example for the String I/O Fuctions in files *///* using fputs() functions Program To create the new file with geven text/
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
FILE *fp;
char str[80],fname[10];
clrscr();
printf("\nEnter file name to be create:");
gets(fname);
fp=fopen(fname, "w");
if(fp==NULL)
{
puts("\nSorry, Cannot create the file ");
getch();
exit(1);
}
printf("\nEnter any text:\n");
while(strlen(gets(str))>0)
{
fputs(str,fp);
fputs("\n",fp);
}
fclose(fp);
 }