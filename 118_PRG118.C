//PROGRAM EXAMPLE FOR THE OPENEING AND CLOSING A FILE USING fopen() and fclose()
#include<stdio.h>
#include<conio.h>
void main()
{
FILE*fp;
fp=fopen("student.txt","r");
clrscr();
if(fp==NULL)
{
puts("\nThe file does not exist,cannot open the file");
getch();
exit(2);
}
else
{
puts("\nThe file is opened in read only mode");
}
fclose(fp);
getch();
}