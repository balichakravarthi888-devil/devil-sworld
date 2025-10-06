/* program to sorting a single dimesional array */
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10], i, j, temp = 0;
    clrscr();

    printf("\n enter any 10 values for array");
    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    clrscr();
    printf("\n the values before sorting are\n");
    for(i = 0; i < 10; i++)
        printf("%d\t", a[i]);

    /*loops for sorting*/
    for(i = 0; i < 10; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            /*a[i]<a[j]?(temp=a[i],a[i]=a[j],a[j]=temp):0;*/
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\n the values after sorting are\n");
    printf("values in decending order\n");
    for(i = 0; i < 10; i++)
        printf("%d\t", a[i]);

    printf("\nvalues in ascending order\n");
    for(i = 9; i >= 0; i--)
        printf("%d\t", a[i]);

    getch();
}
