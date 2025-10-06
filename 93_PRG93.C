/* PROGRAM EXAMPLE FOR DOUBLE POINTER VARIABLES */

#include <stdio.h>
#include <conio.h>

void main() {
    int a, *ptr1, **ptr2;

    a = 5;
    ptr1 = &a;
    ptr2 = &ptr1;

    clrscr();
    printf("\nThe value in a is: %d", a);
    printf("\nThe address of a is: %u", &a);
    printf("\nThe address in ptr1 is: %u", ptr1);
    printf("\nThe value at address of ptr1 is: %d", *ptr1);
    printf("\nThe address of ptr1 is: %u", &ptr1);
    printf("\nThe address in ptr2 is: %u", ptr2);
    printf("\nThe value at address of double pointer ptr2 is: %u", *ptr2);
    printf("\nThe value at address of ptr1 is: %d", *(*ptr2));

    getch();
}
