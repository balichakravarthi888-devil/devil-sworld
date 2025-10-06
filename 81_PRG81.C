/* PROGRAM EXAMPLE FOR HOW TO CALL USER DEFINED FUNCTIONS */

#include <stdio.h>
#include <conio.h>

void first(void);
void second(void);
void third(void);

void main() {
    clrscr();
    printf("\nI am in Main() function");
    first();
    printf("\nI am in Main() function");
    getch();
}

void first() {
    printf("\nI am in first");
    second();
}

void second() {
    printf("\nI am in second");
    third();
}

void third() {
    printf("\nI am in third");
}
