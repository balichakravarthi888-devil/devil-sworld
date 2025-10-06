/* DEFINITIONS FOR THE USER DEFINED FUNCTIONS */

#include <stdio.h>
#include <conio.h>
#include <string.h>

void user_strcpy() {
    char s1[15], s2[15];
    int i;
    printf("\nEnter any string for s1: ");
    fflush(stdin);
    gets(s1);
    for(i = 0; s1[i] != '\0'; i++)
        s2[i] = s1[i];
    s2[i] = '\0';
    printf("\nThe string in s1 is: %s\nAnd the copied string is: %s\n", s1, s2);
}

void user_strrev() {
    int i, j;
    char s1[10], s2[10];
    printf("\nEnter the string for s1: ");
    fflush(stdin);
    gets(s1);
    for(i = 0; s1[i] != '\0'; i++);
    for(j = 0, i = i - 1; i >= 0; i--, j++)
        s2[j] = s1[i];
    s2[j] = '\0';
    printf("\nThe string in s1 is: %s\nThe reversed string is: %s\n", s1, s2);
}

void user_substr() {
    char s1[30], s2[30];
    int pos, len, i, j;
    printf("\nEnter the string for s1: ");
    fflush(stdin);
    gets(s1);
    printf("Enter the position of the substring: ");
    scanf("%d", &pos);
    printf("Enter the length of the substring: ");
    scanf("%d", &len);
    for(i = pos - 1, j = 0; i < pos - 1 + len && s1[i] != '\0'; i++, j++)
        s2[j] = s1[i];
    s2[j] = '\0';
    printf("\nThe string in s1 is: %s\nThe substring is: %s\n", s1, s2);
}

void user_strcat() {
    char s1[20], s2[20];
    int i, j;
    printf("\nEnter the string for s1: ");
    fflush(stdin);
    gets(s1);
    printf("Enter the string for s2: ");
    fflush(stdin);
    gets(s2);
    i = strlen(s1);
    for(j = 0; s2[j] != '\0'; j++, i++)
        s1[i] = s2[j];
    s1[i] = '\0';
    printf("\nThe concatenated string in s1 is: %s\n", s1);
}
