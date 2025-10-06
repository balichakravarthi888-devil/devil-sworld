/* This program shows the usage of array of strings,
   declaring array of strings, reading array of strings and printing array of string variables */

#include<stdio.h>
#include<conio.h>

const int NOFS = 5;
const int LEOFS = 15;

void main()
{
    int i;
    char names[NOFS][LEOFS];

    clrscr();

    printf("Enter %d names \n", NOFS);
    for(i = 0; i < NOFS; i++)
        scanf("%s", names[i]);

    clrscr();

    for(i = 0; i < NOFS; i++)
        printf("%s\n", names[i]);

    getch();
}
