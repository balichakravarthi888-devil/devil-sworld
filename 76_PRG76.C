//PROGRAM EXAMPLE FOR HE FUNCTIONS WITH ARGUMENTS BUT NO RETURNS- PROGRAM FOR SWAPING TWO NUMBERS
#include <stdio.h>
#include <conio.h>

void swap(int a, int b);  /* Function prototype */

void main() {
    int a = 14, b = 16;
    
    clrscr();
    
    printf("The values before swapping are a = %d, b = %d\n", a, b);
    swap(a, b);  /* Function calling */
    getch();
}

/* Function definition */
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    
    printf("The values after swapping are a = %d, b = %d\n", a, b);
}
