/* This program shows the usage of strcpy() function */

#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
    char str1[20], str2[20];

    clrscr();

    printf("\nEnter a String for str1 : ");
    scanf("%s", str1);

    printf("\nNow the string in str1 is: %s", str1);

    printf("\nNow the string in str2 is: %s\n", str2);  // str2 uninitialized here

    strcpy(str2, str1);

    printf("\nNow string in str1 is: %s", str1);
    printf("\nNow string in str2 is: %s", str2);

    getch();
}
