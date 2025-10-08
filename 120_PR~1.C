//PROGRAM EXAMPLE FOR THE fputc()

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
char c,fname[20];
FILE*fp;
printf("\nHello enter the file name to be created:");
scanf("%s",fname);
fp=fopen(fname,"a");
if(fp==NULL)
{
puts("\nsorry cannot create the file");
getch();
exit(1);
}
else
c=getchar();
while(c!='0')
{
fputc(c,fp);
c=getchar();
}
printf("\nThe %s file has created successfully",fname);
getch();
}