// Program to find out the given character is in lowercase or not and if it is in lowercase then change it into upper case otherwise change it into lowercase using isupper(), islower(), toupper(), tolower() functions#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void main()
{
char c;
int ans;
clrscr();
printf("\nEnter a single character:");
c = getchar();
ans = islower(c);
clrscr();
if(ans > 0)
{
printf("Entered character is in lower case, that is: %c\n", c);
printf("The upper case character is : %c\n", toupper(c));
}
else
{
printf("Entered character is in upper case, that is: %c\n", c);
printf("The lower case character is : %c\n", tolower(c));
}
getch();
}
