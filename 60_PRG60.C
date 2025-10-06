/* This program is to copy a string to other variable using strcpy() function */

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main() {
    char str[20];

    clrscr();
    printf("Enter any string for str: ");
    scanf("%s", str);

    printf("\nNow string in str is: %s\n", str);

    strcpy(str, "welcome to devils world");

    printf("\nNow string in str is: %s\n", str);

    getch();
}
