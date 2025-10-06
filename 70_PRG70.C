/* This program to check the given character is alphabet or numaric or special character using isalnum() function */
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void main()
{
char c;
int ans;
clrscr();
printf("Enter any single character :");
c = getchar();
ans = isalnum(c);
if(ans > 0)
printf("\nEntered character is Alphabet or numaric");
else
printf("\nEntered character is special character");
getch();
}
