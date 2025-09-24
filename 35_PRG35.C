//PROGRAM EXAMPLE FOR THE goto STATEMENT

#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,res=0;
char ch;
start:
clrscr();
printf("\n Enter any number for finding the prime or not:");
scanf("%i",&n);
for(i=2,res=0;i<n;i++)
{
if(n%i==0)
res=1;
}
if(res==0)
printf("\n The given number is a prime number");
else
printf("\n The given number is not a prime number");
printf("\n do you want to check anotherr number [y/n]");
fflush(stdin);
ch=getchar();
if(ch=='y'||ch=='Y')
goto start;
}