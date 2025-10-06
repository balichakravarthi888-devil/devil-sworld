/*THIS PROGRAM ACCEPT TWO STRINGS AND CONCATENATES CONTENTS OF THE SECOND STRING AT THE END OF THE FIRST*/

#include<stdio.h>
#include<conio.h>
void main()
{
char str1[20],str2[20];
clrscr();
printf("\nEnter a string for str1:");
scanf("%s",str1);
printf("\nEnter a string for str2:");
fflush(stdin);
gets(str2);
printf("\n the first string before using strcat is :%s",str1);
printf("\n The second string before using strcat is :%s",str2);
strcat(str1,str2);
printf("\n The first string after using strcat is :%s",str1);
printf("\n The second string after using strcat is :%s",str2);
getch();
}