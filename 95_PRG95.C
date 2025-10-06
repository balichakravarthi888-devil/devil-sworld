/* PROGRAM EXAMPLE FOR POINTERS WITH ARITHMETICAL OPERATORS */

#include <stdio.h>
#include <conio.h>

void main() {
    int a = 14, *aptr;

    clrscr();
    aptr = &a;

    printf("\nThe address of a is: %u", aptr);
    printf("\nThe value at address of aptr is: %d", *aptr);

    *aptr = *aptr + 2;  /* Incrementing the value at address of aptr (value in a) */

    printf("\nNow the value at address of aptr after increment is: %d", *aptr);

    getch();
}
