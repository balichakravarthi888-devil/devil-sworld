/* Arrays with functions and pointers
This program pass the array to the functions using
call by refference */
#include <stdio.h>
#include <conio.h>

void display(int *aptr, int n);  // Function prototype

int main()
{
    int arr[6] = {11, 22, 33, 44, 55, 66};
    clrscr();
    display(arr, 6);
    getch();
    return 0;
}

void display(int *aptr, int n)
{
    int i;
    printf("\nThe array elements are :\n");
    for(i = 0; i < n; i++)
    {
        printf("\nThe address of element is : %u", (aptr + i));
        printf(" and the value is: %d", *(aptr + i));
    }
}
