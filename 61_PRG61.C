/* This program finds out the length of the string using strlen() function */
#include <stdio.h>
#include <string.h>
#include <conio.h>

void main() {
    char str1[20];
    int len, i, j;
    clrscr();
    printf("Enter any string for str1: ");
    scanf("%s", str1);

    len = strlen(str1);
    printf("\nThe string length is: %d\n", len);

    /* Loop to print the string in different patterns */
    for(i = 0; i < len; i++) {
        for(j = 0; j <= i; j++)
            printf("%c", str1[j]);
        printf("\n");
    }
    getch();
}
