#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void main()
{
char ch;
int ans;
clrscr();
printf("\nEnter a single character \a");
/* ch = getchar(); */
scanf("%c",&ch);
ans = isupper(ch);
if(ans == 0)
printf("\nEntered character is in lower case");
else
printf("\nEntered character is in upper case");
getch();
}
