
/*Program example for the call_by reference. functions with pointers */
#include <stdio.h>
#include <conio.h>

void sqr(int *);  // Function prototype

void main()
{
    int a, s;
    clrscr();
    printf("\n enter value for a \n");
    scanf("%d", &a);
    s = a;
    sqr(&a);
    printf("\n square of %d is %d", s, a);
    getch();
}

void sqr(int *x)
{
    *x = (*x) * (*x);
}
