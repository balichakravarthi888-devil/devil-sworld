#include <stdio.h>
#include <conio.h>

void factorial();  /* Function prototype declaration */

void main() {
    clrscr();
    factorial();    /* Function calling */
    getch();
}

void factorial()  /* Function definition */
{
    int i, n, fact = 1;   /* Initialize factorial to 1 */
    printf("\nEnter the number for finding factorial:\n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        fact = fact * i;  /* Corrected calculation */
    printf("\nThe factorial of the given number %d is %d\n", n, fact);
    printf("\n**************************************\n");
}
