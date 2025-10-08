/* program reading and writing fles using fgete() and fpute() *
PROGRAM TO COPY THE CONTENTS FROM ONE FILE TO ANOTHER */
#include<stdio.h>
#include<conio.h>
 #include<stdlib.h>
void main()
{
char ch,sourcefile [20],targetfile[20];
 FILE *fp1, *fp2;
printf("\nEnter the source filename:");
 scanf("%s", sourcefile);
fp1=fopen(sourcefile,"r");
clrscr();
if(fp1==NULL)
{
puts("\nThe source file does not Exists, So we can't copy the File ");
getch();

exit(1);
}
printf("\nEnter the targetfile name:");
scanf("%s", targetfile);
fp2=fopen(targetfile, "w");
if(fp2==NULL)
{
puts("\nThe Target file does not Exists, So we can't copy the file");
fclose(fp1);
getch();
exit(1);
}
 ch=fgetc(fp1);
 while(ch!=EOF)// EOF is a constant defined in the header stdio.h it indicates end of the file */
{
fputc(ch,fp2);
ch=fgetc(fp1);
}
printf("\nThe file has copyed");
fclose(fp1);
fclose(fp2);
getch();
}
