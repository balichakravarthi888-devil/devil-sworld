//THIS PROGRAM IS EXAMPLE FOR THE goto STATEMENT

#include<stdio.h>
#include<conio.h>
void main()
{
int number;
char answer;
clrscr();
label:
printf("\nEnter any value for number:");
scanf("%d",&number);
if((number%2)==0)
{
printf("\n Hello you entered even number");
}
else
{
printf("\n Hello you entered odd number");
}
printf("\nDo you want to check anotherr number(y/n)");
fflush(stdin);
answer=getchar();
if(answer=='y')
goto label;
else
printf("\Have a nice day");
getch();
}
