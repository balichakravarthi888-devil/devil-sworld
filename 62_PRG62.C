#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
    char ch[20];
    clrscr();
    printf("Enter any string for ch: ");
    gets(ch);
    printf("\nThe given string is :%s", ch);
    printf("\nThe given string in uppercase is %s", strupr(ch));
    printf("\nThe given string in lowercase is %s", strlwr(ch));
    getch();
}
