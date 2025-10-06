/* PROGRAM TO CONVERT A GIVEN CHARACTER TO UPPER CASE */

#include <stdio.h>
#include <conio.h>

char upr(char);

void main() {
    char c, uc;
    clrscr();
    printf("Enter any character: ");
    scanf("%c", &c);
    uc = upr(c);
    printf("The given character in upper case is: %c", uc);
    getch();
}

char upr(char ch) {
    if(ch >= 'a' && ch <= 'z')
        return ch - 32;
    else
        return ch;
}
