/* PROGRAM EXAMPLE FOR POINTERS WITH INCREMENT OPERATOR */

#include <stdio.h>
#include <conio.h>

void main() {
    int a = 10, *aptr;
    char ch = 's', *chptr;
    float b = 10.56, *bptr;

    aptr = &a;
    bptr = &b;
    chptr = &ch;

    clrscr();
    printf("The addresses and values before incrementing the pointer are ");
    printf("\nAddress of a in aptr is %u and value in a is: %d", aptr, *aptr);
    printf("\nAddress of b in bptr is %u and value in b is: %f", bptr, *bptr);
    printf("\nAddress of ch in chptr is: %u and value in ch is: %c", chptr, *chptr);

    aptr++;
    bptr++;
    chptr++;

    printf("\n\nThe addresses and values after incrementing the pointer are ");
    printf("\nAddress of a in aptr is %u and value in a is: %d", aptr, *aptr);
    printf("\nAddress of b in bptr is %u and value in b is: %f", bptr, *bptr);
    printf("\nAddress of ch in chptr is %u and value in ch is: %c", chptr, *chptr);

    getch();
}
