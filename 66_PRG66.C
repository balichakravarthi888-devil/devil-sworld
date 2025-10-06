//Program to check the given character is DIGIT or ALPHABET or Special character
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("\nEnter any single character :");
c = getchar();
if(isdigit(c) > 0)
printf("\nEntered character is digit, that is: %c\n", c);
else if(isalpha(c) > 0)
{
printf("Entered character is an alphabet, that is : %c\n", c);
}
else
printf("Entered character is non alphanumeric (special character)\n");
getch();
}
