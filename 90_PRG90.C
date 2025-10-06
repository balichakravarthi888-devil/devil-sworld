  /* PROGRAM EXAMPLE FOR THE ADDRESS OF OPERATOR (&) IN POINTERS */

#include <stdio.h>
#include <conio.h>

void main() {
    int a = 10;
    clrscr();
    printf("\nAddress of a is: %u", &a);
    printf("\nValue in a is: %d", a);
    getch();
}
