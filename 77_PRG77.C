/* FUNCTION WITHOUT ARGUMENTS AND WITH RETURN VALUES */

#include <stdio.h>
#include <conio.h>

int factorial();

void main() {
    int k;
    clrscr();
    k = factorial();
    printf("\n*************************");
    printf("\nThe factorial of the given number is: %d", k);
    printf("\n************************");
    getch();
}

int factorial() {
    int i, n, fact = 1;
    printf("Enter any number for finding factorial:\n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}
