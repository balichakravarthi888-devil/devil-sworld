/* PROGRAM EXAMPLE FOR DECLARING AND INITIALIZING POINTER VARIABLES */

#include <stdio.h>
#include <conio.h>

void main() {
    int a;
    int *ptr;
    a = 10;
    ptr = &a;
    clrscr();
    printf("\nAddress of a is: %u", &a);
    printf("\nAddress in ptr is: %u", ptr);
    printf("\nAddress of ptr is: %u", &ptr);
    printf("\nValue of a is: %d", a);
    printf("\nValue at address of ptr is: %d", *ptr);
    printf("\nValue of a using *(&a): %d", *(&a));
    getch();
}
