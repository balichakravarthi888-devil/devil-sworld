//this program is example for the exit() function

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int i;
clrscr();
for(i=1;i<=10;i++)
{
if(i==5)
exit(1);
printf("%d\n",i);
}
printf("\n This is end of line in our programe:");
getch();
}