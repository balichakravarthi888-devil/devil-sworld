/* This program example for strcpy() function */

#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
    char str1[20] = "DEVIL";

    clrscr();

    printf("\nNow string in str1 is: %s\n", str1);

    strcpy(str1, "WELCOME TO WORLD OF DEVIL");

    printf("\nNow string in str1 is: %s\n", str1);

    getch();
}
