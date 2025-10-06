/* This program shows the usage of declaring array of strings,
   reading array of strings and printing array of string variables */

#include<stdio.h>
#include<conio.h>

void main()
{
    int i;
    char names[5][15];

    clrscr();

    printf("\nEnter any 5 names for the string array");

    for(i = 0; i < 5; i++)
        scanf("%s", names[i]);

    printf("\nThe strings in the array are");

    for(i = 0; i < 5; i++)
        printf("\n%s", names[i]);

    getch();
}
