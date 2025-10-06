/* Program Example for the functions without arguments and without returns */
#include<stdio.h>
#include<conio.h>

void hai(); /* user defined function prototype declaration */
void bye();

void main()
{
    char name[20];
    clrscr();
    printf("Enter your name: ");
    scanf("%s", name);
    hai();
    printf("\n****** Hello %s *******", name);
    printf("\nWelcome to SIIT");
    bye();
    getch();
}

void hai()
{
    int time;
    printf("\nEnter the time: ");
    scanf("%d", &time);
    if(time >= 0 && time <= 12)
        printf("Good morning");
    else if(time > 12 && time < 18)
        printf("Good afternoon");
    else if(time >= 18 && time <= 23)
        printf("Good evening");
}

void bye()
{
    int time;
    printf("\nR U Going?\nWhat is the time now: ");
    scanf("%d", &time);
    if(time >= 20 && time <= 24)
        printf("\n~~~~~~~~~~ Good night ~~~~~~~~~~");
    else
        printf("\n\t............ Have a nice Day.........");
}
