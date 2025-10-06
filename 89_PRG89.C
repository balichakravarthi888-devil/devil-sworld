/* PROGRAM EXAMPLE FOR THE FUNCTION WITH DOUBLE DIMENSIONAL ARRAY */

#include <stdio.h>
#include <conio.h>

void fun(int a[10][10], int n);

void main() {
    int a[10][10], i, j, n, m;
    clrscr();
    printf("Enter row and column sizes of the array: ");
    scanf("%d%d", &n, &m);
    printf("Enter elements of the array:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    fun(a, n);
    getch();
}

void fun(int a[10][10], int n) {
    int i, j;
    printf("The elements of the 2D array are:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
