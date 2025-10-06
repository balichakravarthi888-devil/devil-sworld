#include <stdio.h>
#include <conio.h>

void line(char ch, int x);  /* Function prototype */

void main() {
    char ch;
    int a;
    
    clrscr();
    
    printf("Enter the character to be printed: ");
    fflush(stdin);
    scanf("%c", &ch);
    
    printf("Enter the number of characters to print in a line: ");
    scanf("%d", &a);
    
    line(ch, a);  /* Function calling with arguments */
    
    printf("\nHave a nice day\n");
    getch();
}

/* Function definition for line */
void line(char c, int x) {
    int i;
    printf("\n");
    for(i = 0; i < x; i++)
        printf("%c", c);
    printf("\n");
}
