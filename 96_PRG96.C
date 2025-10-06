/* PROGRAM EXAMPLE FOR POINTERS WITH ARITHMETIC OPERATIONS ON TWO NUMBERS */

#include <stdio.h>
#include <conio.h>

void main() {
    int a, b, c, *p1, *p2;
    float d;

    clrscr();
    printf("Enter any 2 numbers: ");
    scanf("%d%d", &a, &b);

    p1 = &a;
    p2 = &b;

    c = *p1 + *p2;
    printf("\nAddition = %d", c);

    c = *p1 - *p2;
    printf("\nSubtraction = %d", c);

    c = *p1 * *p2;
    printf("\nMultiplication = %d", c);

    d = (float)(*p1) / (*p2);
    printf("\nDivision = %.2f", d);

    getch();
}
