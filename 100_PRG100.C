/* PROGRAM EXAMPLE FOR POINTERS WITH ARRAYS */

#include <stdio.h>
#include <conio.h>

void main() {
    int i, a[5] = {10, 20, 30, 40, 50}, *aptr;

    aptr = &a[0];  /* pointer points to the first element of the array */

    clrscr();
    for(i = 0; i < 5; i++)
        printf("\nThe address of a[%d] is: %u and value is: %d", i, (aptr + i), *(aptr + i));

    getch();
}
