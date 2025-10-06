#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
    char ch[20];
    clrscr();
    printf("Enter any string for ch: ");
    gets(ch);
    printf("\nThe given string in reverse is %s", strrev(ch));
    getch();
}
