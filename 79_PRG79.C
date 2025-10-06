/* PROGRAM TO PRINT ASCII VALUES FROM 0 TO 254 */

#include <stdio.h>
#include <conio.h>

void main() {
    int n;
    clrscr();
    for(n = 0; n < 255; n++)
        printf("%d - %c\t", n, n);
    getch();
}
