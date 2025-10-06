/* This program shows the usage of strings.
Program to declaring a string, initializing a string variable and print string variables */

#include<stdio.h>
#include<conio.h>

void main()
{
    char name[20]; /* Declaration of string variable */
    char office[15] = "SIIT Computers"; /* Initializing string at declaration time */

    clrscr();

    printf("Enter your name:");
    gets(name); /* Reading the string to the variable name using gets() function */

    printf("\nHello %s Welcome to ", name);
    printf("%s", office);

    getch();
}
