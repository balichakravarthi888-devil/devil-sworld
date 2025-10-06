/* Program Example for the user defined functions */
#include<stdio.h>
#include<conio.h>

int sum(int, int); /* User defined Function Prototype declaration */

void main()
{
    int a, b, s;
    clrscr();
    printf("\nEnter any two values for a and b: ");
    scanf("%d%d", &a, &b);
    s = sum(a, b); /* User defined function calling */
    printf("\nThe sum of two numbers is : %d", s);
    getch();
}

/* User defined function definition */
int sum(int x, int y)
{
    int z;
    z = x + y;
    return(z);
}
