/* PROGRAM EXAMPLE FOR TYPES OF POINTER VARIABLES */

#include <stdio.h>
#include <conio.h>

void main() {
    int a, *aptr;
    float b, *bptr;
    char c, *cptr;

    a = 10;
    b = 14.16;
    c = 'R';

    aptr = &a;
    bptr = &b;
    cptr = &c;

    clrscr();
    printf("\nThe address of a in aptr is: %u", aptr);
    printf("\nThe value at address is: %d\n", *aptr);

    printf("\nThe address of b in bptr is: %u", bptr);
    printf("\nThe value at address is: %.2f\n", *bptr);

    printf("\nThe address of c in cptr is: %u", cptr);
    printf("\nThe value at address in cptr is: %c", *cptr);

    getch();
}
