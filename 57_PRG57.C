/* This program shows the usage of strcmp() function. */

#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
    int ans;
    char str1[20], str2[20];

    clrscr();

    printf("\nEnter a String for str1 :");
    scanf("%s", str1);

    printf("\nEnter a String for str2 :");
    scanf("%s", str2);

    ans = strcmp(str1, str2);

    if(ans == 0)
        printf("\nTwo strings are equal");
    else if(ans > 0)
        printf("\nFirst string is greater than second string");
    else
        printf("\nSecond string is greater than first string");

    getch();
}
