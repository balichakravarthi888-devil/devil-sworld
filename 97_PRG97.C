/* PROGRAM EXAMPLE FOR POINTERS WITH ARITHMETIC OPERATORS ON A SINGLE VARIABLE */

#include <stdio.h>
#include <conio.h>

void main() {
    int a = 14, *aptr;

    clrscr();
    aptr = &a;

    printf("\nThe address of a is: %u", aptr);
    printf("\nThe value at address of a is: %d", *aptr);

    a = a + 2;  /* Incrementing value of a */
    printf("\nThe value of a after increment is: %d", *aptr);
    printf("\nThe address of a is still: %u", aptr);

    getch();
}
