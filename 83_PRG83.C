/* PROGRAM EXAMPLE FOR FUNCTIONS WITHOUT ARGUMENTS AND RETURNS AND STRING MANIPULATION MANUALLY */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "mystrfun.h"

void main() {
    int ch;
    clrscr();
    printf("String manipulation *********\n");
    do {
        printf("\n1. strcpy\n2. strrev\n3. substr\n4. strcat\n5. Exit\n");
        printf("Hello! Enter your choice from the above list: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1:
                printf("\nString Copy\n");
                user_strcpy();
                break;
            case 2:
                printf("\nString Reverse\n");
                user_strrev();
                break;
            case 3:
                printf("\nSub String\n");
                user_substr();
                break;
            case 4:
                printf("\nString Concatenation\n");
                user_strcat();
                break;
            case 5:
                printf("\nHello you have chousen the exit");
exit(1);
                break;
            default:
                printf("\nInvalidF choice!\n");
        }
    } while(ch != 5);
    getch();
}
