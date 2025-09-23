//program example for finding the biggest number among four numbers using
//nested conditional execution statements

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,big;
clrscr();
printf("\nenter any four values for a,b,c and d");
scanf("%d%d%d%d",&a,&b,&c,&d);
big=(a>b)?(a>c)?(a>d)?a:d:(c>d)?c:d:(b>c)?(b>d)?b:d:(c>d)?c:d;
printf("\n the biggest number is: %d",big);
getch();
}