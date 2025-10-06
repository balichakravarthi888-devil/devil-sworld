/* PROGRAM TO FIND THE POWER OF A NUMBER */

#include <stdio.h>
#include <conio.h>

int power(int, int);

void main() {
    int n, p, res;
    clrscr();
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of p: ");
    scanf("%d", &p);
    res = power(n, p);
    printf("%d raised to the power %d is: %d", n, p, res);
    getch();
}

int power(int n, int p) {
    int i, result = 1;
    for(i = 1; i <= p; i++)
        result = result * n;
    return result;
}
