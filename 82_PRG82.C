/* PROGRAM USING USER DEFINED FUNCTIONS */

#include <stdio.h>
#include <conio.h>
#include "funs.h"

void main() {
    int a, b, c;
    float d;
    clrscr();
    printf("\nEnter any two values for a, b: ");
    scanf("%d%d", &a, &b);

    line();
    c = sum(a, b);
    printf("\n\tsum = %d\n", c);
    printline();

    c = diff(a, b);
    printf("\n\tdifference = %d\n", c);
    line();

    c = mult(a, b);
    printf("\n\tmultiplication = %d\n", c);
    printline();

    d = div(a, b);
    printf("\n\tdivision = %.2f\n", d);

    getch();
}
