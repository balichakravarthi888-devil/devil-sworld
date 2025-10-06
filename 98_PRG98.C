/* PROGRAM EXAMPLE FOR ARRAY ADDRESSES AND POINTERS WITH ARRAYS */

#include <stdio.h>
#include <conio.h>

void main() {
    int i, a[5] = {10, 20, 30, 40, 50};

    clrscr();
    for(i = 0; i < 5; i++)
        printf("\nAddress is %u, corresponding value is %d", &a[i], a[i]);

    getch();
}
