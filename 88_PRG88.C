/* PROGRAM EXAMPLE FOR THE FUNCTION WITH 1D ARRAY */

#include <stdio.h>
#include <conio.h>

int func(int a[10], int n);

void main() {
    int a[10], i, sum;
    clrscr();
    printf("Enter any 10 values: \n");
    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    sum = func(a, 10); /* calling the user defined function func with array a */
    printf("The sum of the array is: %d\n", sum);
    getch();
}

int func(int a[10], int n) {
    int i, s = 0;
    for(i = 0; i < n; i++)
        s += a[i];
    return s;
}
