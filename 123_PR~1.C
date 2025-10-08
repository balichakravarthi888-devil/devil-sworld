
/* Program Example for the String I/O Fuctions in files using fgets()*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
FILE *fp;
char ans='y', str[80], fname[15];
while(ans=='y')
{
clrscr();
printf("\nEnter a file name to be open :");
fflush(stdin);
gets(fname);
fp=fopen(fname,"r");
if(fp==NULL)
{
puts("Sorry File not Exists, So We Cannot open file ");
getch();
exit(1);
}
while(fgets(str,79,fp)!=NULL)
printf("%s",str);
printf("\n\n\a Do you want to read another file [y/n] :");
fclose(fp);
fflush(stdin);
scanf("%c",&ans);
}
}