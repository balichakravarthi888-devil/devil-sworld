/*this program is example for the iterative control structure this program to
print odd numbers usin while loop*/
#include<stdio.h>
#include<conio.h>
void main()
{
int number=1;

while(number<=30)
{
if(number%2!=0)
printf("%d\n",number);
number++;
}
getch();
}