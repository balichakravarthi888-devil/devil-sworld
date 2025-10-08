/* structures with functions using call by value and call by reference */
#include<stdio.h>
#include<conio.h>
void display(struct str);
void show(struct str *);
struct str
{
char ch;
int i;
float avg;
};
void main()
{
struct str var={'c',100,12.55};
clrscr();
display(var); /* Call by value */
show(&var); /* Call by Refference */
getch();
}
void display(struct str v1)
{
printf("\n%c\t%d\t%f", v1.ch,v1.i,v1,v1.avg);
}
void show(struct str *v)
{
printf("\n%c\t%d\t%f", v->ch,v->i,v->avg);
}