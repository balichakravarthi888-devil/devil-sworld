#include <stdio.h>
#include <conio.h>

void main()
{
    char name[20];

    clrscr();

    printf("\nEnter a String for name: ");
    scanf("%s", name);

    printf("\nThe string in the variable 'name' is : %s", name);

    getch();
}
